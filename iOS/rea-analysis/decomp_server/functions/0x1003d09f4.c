// rea decompile_all
// name: FUN_1003d09f4
// address: 0x1003d09f4
// body: available
// range: 0x1003d09f4-0x1003d0c7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003d0c5c) */

void FUN_1003d09f4(code *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  code *pcVar10;
  long lVar11;
  ulong uVar12;
  code *local_58;
  
  lVar2 = 0;
  FUN_1003d0d4c();
  lVar2 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar2 + 0x40));
  puVar9 = &stack0xffffffffffffff60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar11 = (long)puVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar7 = lVar11 - extraout_x12_00;
  uVar12 = *unaff_x20;
  pcVar10 = param_1;
  FUN_1003ce3a4(param_1,param_2,uVar12);
  if ((unaff_x21 == 0) && ((param_2 & 1) == 0)) {
    local_58 = pcVar10;
    if (SCARRY8((long)pcVar10,1)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1003d0c7c);
      (*pcVar10)();
    }
    while( true ) {
      pcVar10 = pcVar10 + 1;
      pcVar4 = *(code **)(uVar12 + 0x10);
      if (pcVar10 == pcVar4) break;
      if (pcVar4 <= pcVar10) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1003d0c68);
        (*pcVar10)();
      }
      uVar5 = (ulong)*(byte *)(lVar2 + 0x50) + 0x20 &
              ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
      lVar1 = uVar12 + uVar5;
      lVar8 = *(long *)(lVar2 + 0x48);
      lVar6 = lVar8 * (long)pcVar10;
      FUN_100082394(lVar1 + lVar6,uVar7,FUN_1003d0d4c);
      uVar3 = uVar7;
      (*param_1)();
      FUN_1000d27dc(uVar7,FUN_1003d0d4c);
      if ((uVar3 & 1) == 0) {
        if (pcVar10 != local_58) {
          if ((long)local_58 < 0) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x1003d0c6c);
            (*pcVar10)();
          }
          pcVar4 = *(code **)(uVar12 + 0x10);
          if (pcVar4 <= local_58) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x1003d0c70);
            (*pcVar10)();
          }
          lVar8 = lVar8 * (long)local_58;
          FUN_100082394(lVar1 + lVar8,lVar11,FUN_1003d0d4c);
          if (pcVar4 <= pcVar10) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x1003d0c74);
            (*pcVar10)();
          }
          FUN_100082394(lVar1 + lVar6,puVar9,FUN_1003d0d4c);
          uVar3 = uVar12;
          _swift_isUniquelyReferenced_nonNull_native();
          if ((uVar3 & 1) == 0) {
            FUN_10040a490();
          }
          lVar1 = uVar12 + uVar5;
          FUN_1003d14c4(puVar9,lVar1 + lVar8);
          if (*(code **)(uVar12 + 0x10) <= pcVar10) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x1003d0c78);
            (*pcVar10)();
          }
          FUN_1003d14c4(lVar11,lVar1 + lVar6);
          *unaff_x20 = uVar12;
        }
        local_58 = local_58 + 1;
      }
    }
  }
  return;
}

