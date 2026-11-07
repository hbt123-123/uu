// rea decompile_all
// name: FUN_1000944ac
// address: 0x1000944ac
// body: available
// range: 0x1000944ac-0x1000945e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000944ac(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  
  lVar9 = *(long *)(param_1 + 0x10);
  local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar9 != 0) {
    FUN_10006fce4(0,lVar9,0);
    puVar10 = (undefined8 *)(param_1 + 0x38);
    do {
      puVar6 = local_68;
      local_a8 = puVar10[-3];
      uStack_a0 = puVar10[-2];
      local_98 = puVar10[-1];
      uVar2 = *puVar10;
      uStack_90 = uVar2;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar2);
      puVar7 = &DAT_100a75ac8;
      FUN_100004bb4(&DAT_100a75ac8,&DAT_100813090);
      puVar8 = &DAT_100a76390;
      FUN_100004bb4(&DAT_100a76390,&DAT_10080b1f0);
      _swift_dynamicCast(&local_88,&local_a8,puVar7,puVar8,7);
      uVar5 = uStack_70;
      uVar4 = local_78;
      uVar3 = uStack_80;
      uVar2 = local_88;
      uVar1 = *(ulong *)(puVar6 + 0x10);
      local_68 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        FUN_10006fce4(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(local_68 + 0x10) = uVar1 + 1;
      *(undefined8 *)(local_68 + uVar1 * 0x20 + 0x20) = uVar2;
      *(undefined8 *)(local_68 + uVar1 * 0x20 + 0x28) = uVar3;
      *(undefined8 *)(local_68 + uVar1 * 0x20 + 0x30) = uVar4;
      *(undefined8 *)(local_68 + uVar1 * 0x20 + 0x38) = uVar5;
      puVar10 = puVar10 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return local_68;
}

