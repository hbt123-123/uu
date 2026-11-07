// rea decompile_all
// name: FUN_1001e5a40
// address: 0x1001e5a40
// body: available
// range: 0x1001e5a40-0x1001e5b97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e5a40(long param_1,code *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar5 = *(long *)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)(param_1 + 0x20);
    do {
      local_68 = *puVar6;
      FUN_1001e5b98(&local_a8,&local_68);
      if (local_98 == 0) {
        uStack_e8 = uStack_a0;
        local_f0 = local_a8;
        uStack_d8 = uStack_90;
        lStack_e0 = local_98;
        uStack_c8 = uStack_80;
        local_d0 = local_88;
        uStack_b8 = uStack_70;
        uStack_c0 = uStack_78;
        FUN_1001e7040(&local_f0);
      }
      else {
        uStack_e8 = uStack_a0;
        local_f0 = local_a8;
        uStack_d8 = uStack_90;
        lStack_e0 = local_98;
        uStack_c8 = uStack_80;
        local_d0 = local_88;
        uStack_b8 = uStack_70;
        uStack_c0 = uStack_78;
        puVar2 = puVar4;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar3 = puVar4;
        if (((ulong)puVar2 & 1) == 0) {
          puVar3 = (undefined *)0x0;
          FUN_100036b14(0,*(long *)(puVar4 + 0x10) + 1,1,puVar4);
        }
        uVar1 = *(ulong *)(puVar3 + 0x10);
        puVar4 = puVar3;
        if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
          puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
          FUN_100036b14(puVar4,uVar1 + 1,1,puVar3);
        }
        *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar4 + uVar1 * 0x40 + 0x48) = uStack_c8;
        *(undefined8 *)(puVar4 + uVar1 * 0x40 + 0x40) = local_d0;
        *(undefined8 *)(puVar4 + uVar1 * 0x40 + 0x58) = uStack_b8;
        *(undefined8 *)(puVar4 + uVar1 * 0x40 + 0x50) = uStack_c0;
        *(undefined8 *)(puVar4 + uVar1 * 0x40 + 0x28) = uStack_e8;
        *(undefined8 *)(puVar4 + uVar1 * 0x40 + 0x20) = local_f0;
        *(undefined8 *)(puVar4 + uVar1 * 0x40 + 0x38) = uStack_d8;
        *(long *)(puVar4 + uVar1 * 0x40 + 0x30) = lStack_e0;
      }
      puVar6 = puVar6 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  (*param_2)(puVar4);
  _swift_bridgeObjectRelease(puVar4);
  return;
}

