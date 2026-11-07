// rea decompile_all
// name: FUN_100620ab0
// address: 0x100620ab0
// body: available
// range: 0x100620ab0-0x100620c77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100620ab0(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long local_b0;
  undefined1 auStack_a8 [24];
  long local_90;
  undefined1 auStack_88 [32];
  undefined *local_68;
  
  lVar8 = *(long *)(param_1 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar8 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_1006262f0(0,lVar8,0);
    puVar11 = (undefined8 *)(param_1 + 0x28);
    puVar9 = local_68;
    do {
      uVar1 = puVar11[-1];
      uVar3 = *puVar11;
      uVar5 = uVar1;
      local_b0 = lVar8;
      _swift_getObjectType(uVar1);
      lVar8 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,uVar3,uVar5,0x100904f48,&TargetProtocolRequirement_100904f50);
      lVar6 = 0;
      __sSqMa(0,lVar8);
      lVar10 = *(long *)(lVar6 + -8);
      puVar12 = auStack_a8 + (-8 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0));
      _swift_unknownObjectRetain(uVar1);
      FUN_100617228(puVar12,uVar5,uVar3);
      lVar13 = *(long *)(lVar8 + -8);
      puVar7 = puVar12;
      (**(code **)(lVar13 + 0x30))(puVar12,1,lVar8);
      if ((int)puVar7 == 1) {
        (**(code **)(lVar10 + 8))(puVar12,lVar6);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100620c78);
        (*pcVar4)();
      }
      local_90 = lVar8;
      FUN_1000efc08(auStack_a8);
      (**(code **)(lVar13 + 0x20))();
      _swift_unknownObjectRelease(uVar1);
      FUN_10007f3d4(auStack_a8,auStack_88);
      uVar2 = *(ulong *)(puVar9 + 0x10);
      local_68 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
        FUN_1006262f0(1 < *(ulong *)(puVar9 + 0x18),uVar2 + 1,1);
      }
      puVar9 = local_68;
      *(ulong *)(local_68 + 0x10) = uVar2 + 1;
      FUN_10007f3d4(auStack_88,local_68 + uVar2 * 0x20 + 0x20);
      puVar11 = puVar11 + 2;
      lVar8 = local_b0 + -1;
    } while (lVar8 != 0);
  }
  return puVar9;
}

