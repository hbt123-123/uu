// rea decompile_all
// name: FUN_100093638
// address: 0x100093638
// body: available
// range: 0x100093638-0x1000937f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100093638(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar1 = PTR___swiftEmptyArrayStorage_1000f0740;
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 != 0) {
    lVar10 = 0;
    do {
      lVar4 = lVar10 * 0x38;
      lVar10 = lVar10 + 1;
      FUN_100083ab0(param_1 + 0x20 + lVar4,&local_98);
      lVar8 = *(long *)(param_2 + 0x10);
      lVar7 = *(long *)(lVar8 + 0x10);
      _swift_bridgeObjectRetain(lVar8);
      uVar6 = 0xffffffffffffffff;
      lVar4 = lVar8 + 0x20;
      do {
        if (uVar6 - lVar7 == -1) {
          _swift_bridgeObjectRelease(lVar8);
          uStack_c8 = uStack_90;
          local_d0 = local_98;
          uStack_b8 = uStack_80;
          uStack_c0 = local_88;
          uStack_a8 = uStack_70;
          local_b0 = local_78;
          local_a0 = local_68;
          puVar5 = puVar1;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar5 & 1) == 0) {
            FUN_1000799ac(0,*(long *)(puVar1 + 0x10) + 1,1);
          }
          uVar6 = *(ulong *)(puVar1 + 0x10);
          if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar6) {
            FUN_1000799ac(1 < *(ulong *)(puVar1 + 0x18),uVar6 + 1,1);
          }
          *(ulong *)(puVar1 + 0x10) = uVar6 + 1;
          *(undefined8 *)(puVar1 + uVar6 * 0x38 + 0x50) = local_a0;
          *(undefined8 *)(puVar1 + uVar6 * 0x38 + 0x38) = uStack_b8;
          *(undefined8 *)(puVar1 + uVar6 * 0x38 + 0x30) = uStack_c0;
          *(undefined8 *)(puVar1 + uVar6 * 0x38 + 0x48) = uStack_a8;
          *(undefined8 *)(puVar1 + uVar6 * 0x38 + 0x40) = local_b0;
          *(undefined8 *)(puVar1 + uVar6 * 0x38 + 0x28) = uStack_c8;
          *(long *)(puVar1 + uVar6 * 0x38 + 0x20) = local_d0;
          goto LAB_1000936b4;
        }
        uVar6 = uVar6 + 1;
        if (*(ulong *)(lVar8 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000937f4);
          (*pcVar3)();
        }
        FUN_100083ab0(lVar4,&local_d0);
        lVar2 = local_d0;
        FUN_100083afc(&local_d0);
        lVar4 = lVar4 + 0x38;
      } while (lVar2 != local_98);
      _swift_bridgeObjectRelease(lVar8);
      FUN_100083afc(&local_98);
LAB_1000936b4:
    } while (lVar10 != lVar9);
  }
  return puVar1;
}

