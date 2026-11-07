// rea decompile_all
// name: FUN_10066b530
// address: 0x10066b530
// body: available
// range: 0x10066b530-0x10066b6ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10066b6d0 to 0x10066b294 FUN_10066b294 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10066b530(long *param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint *puVar18;
  uint *puVar19;
  
  lVar4 = 0x11;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
            (0x11,PTR___ss6UInt32VN_100995dc0);
  *(undefined8 *)(lVar4 + 0x10) = 0x11;
  puVar14 = (undefined8 *)(lVar4 + 0x20);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *puVar14 = 0;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined8 *)(lVar4 + 0x58) = 0;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined4 *)(lVar4 + 0x60) = 0;
  lVar13 = *param_1;
  uVar15 = *(ulong *)(lVar13 + 0x10);
  if (uVar15 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10066b700);
    (*pcVar2)();
  }
  uVar16 = *(ulong *)(param_2 + 0x10);
  if (uVar16 != 0) {
    uVar17 = 0;
    puVar18 = (uint *)(param_2 + 0x1c);
    puVar19 = (uint *)(lVar13 + 0x24);
    bVar8 = true;
    uVar6 = 1;
    uVar5 = 0xffffffffffffffff;
    do {
      uVar7 = (ulong)*(uint *)(lVar13 + 0x20) * (ulong)*(uint *)(param_2 + 0x20 + uVar17 * 4);
      if ((uVar7 & 0xffffffff00000000) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10066b6f0);
        (*pcVar2)();
      }
      if (!bVar8) {
        if (uVar15 == 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10066b6f8);
          (*pcVar2)();
        }
        if (uVar15 <= uVar17) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10066b6fc);
          (*pcVar2)();
        }
        uVar9 = 0;
        puVar10 = puVar18;
        do {
          if (uVar16 <= uVar5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10066b6e4);
            (*pcVar2)();
          }
          uVar12 = (ulong)*(uint *)(lVar13 + uVar9 * 4 + 0x24) * (ulong)*puVar10;
          if ((uVar12 & 0xffffffff00000000) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10066b6e8);
            (*pcVar2)();
          }
          uVar9 = uVar9 + 1;
          uVar1 = (int)uVar12 + (int)uVar7;
          uVar7 = (ulong)uVar1;
          puVar10 = puVar10 + -1;
        } while (uVar17 != uVar9);
        if (uVar6 == 0x11) {
          *(uint *)((long)puVar14 + uVar17 * 4) = uVar1;
          _swift_bridgeObjectRelease(lVar13);
          *param_1 = lVar4;
          FUN_10066b294(param_1);
          return;
        }
      }
      if (*(ulong *)(lVar13 + 0x10) <= uVar6 || *(ulong *)(lVar13 + 0x10) < 0x11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10066b6f4);
        (*pcVar2)();
      }
      uVar9 = 0x10;
      puVar10 = puVar19;
      puVar11 = (uint *)(param_2 + 0x60);
      do {
        if (((ulong)*puVar10 * 0x140 & 0xffffffff00000000) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10066b6d8);
          (*pcVar2)();
        }
        if (uVar16 <= uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10066b6dc);
          (*pcVar2)();
        }
        uVar12 = (ulong)*puVar11 * ((ulong)*puVar10 * 0x140 & 0xffffffff);
        if ((uVar12 & 0xffffffff00000000) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10066b6e0);
          (*pcVar2)();
        }
        uVar1 = (int)uVar12 + (int)uVar7;
        uVar7 = (ulong)uVar1;
        uVar9 = uVar9 - 1;
        puVar11 = puVar11 + -1;
        puVar10 = puVar10 + 1;
      } while (uVar17 != uVar9);
      if (uVar5 == 0x10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10066b6ec);
        (*pcVar2)();
      }
      bVar8 = false;
      *(uint *)((long)puVar14 + uVar17 * 4) = uVar1;
      uVar6 = uVar6 + 1;
      puVar18 = puVar18 + 1;
      uVar17 = uVar17 + 1;
      puVar19 = puVar19 + 1;
      bVar3 = uVar5 != uVar16 - 2;
      uVar5 = uVar5 + 1;
    } while (bVar3);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10066b6ac);
  (*pcVar2)();
}

