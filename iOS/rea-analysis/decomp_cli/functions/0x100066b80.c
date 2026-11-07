// rea decompile_all
// name: FUN_100066b80
// address: 0x100066b80
// body: available
// range: 0x100066b80-0x100066d23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100066b80(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  
  puVar5 = PTR___swiftEmptyArrayStorage_1000f0740;
  uVar11 = *(ulong *)(param_1 + 0x10);
  if (uVar11 != 0) {
    uVar9 = 0;
    do {
      puVar10 = (undefined1 *)(param_1 + 0x30 + uVar9 * 0x18);
      while( true ) {
        if (uVar11 <= uVar9) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100066d20);
          (*pcVar6)();
        }
        uVar1 = uVar9 + 1;
        if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100066d24);
          (*pcVar6)();
        }
        uVar2 = *(undefined8 *)(puVar10 + -0x10);
        uVar3 = *(undefined8 *)(puVar10 + -8);
        uVar4 = *puVar10;
        FUN_100066dec(uVar2,uVar3,uVar4);
        FUN_100066dec(uVar2,uVar3,uVar4);
        puVar7 = &local_78;
        FUN_100081610(puVar7,uVar2,uVar3,uVar4);
        FUN_100066dfc(local_78,uStack_70,local_68);
        if (((ulong)puVar7 & 1) != 0) break;
        FUN_100066dfc(uVar2,uVar3,uVar4);
        uVar9 = uVar9 + 1;
        puVar10 = puVar10 + 0x18;
        if (uVar1 == uVar11) {
          return puVar5;
        }
      }
      puVar8 = puVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar8 & 1) == 0) {
        FUN_100079924(0,*(long *)(puVar5 + 0x10) + 1,1);
      }
      uVar9 = *(ulong *)(puVar5 + 0x10);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar9) {
        FUN_100079924(1 < *(ulong *)(puVar5 + 0x18),uVar9 + 1,1);
      }
      *(ulong *)(puVar5 + 0x10) = uVar9 + 1;
      *(undefined8 *)(puVar5 + uVar9 * 0x18 + 0x20) = uVar2;
      *(undefined8 *)(puVar5 + uVar9 * 0x18 + 0x28) = uVar3;
      puVar5[uVar9 * 0x18 + 0x30] = uVar4;
      uVar9 = uVar1;
    } while (uVar1 != uVar11);
  }
  return puVar5;
}

