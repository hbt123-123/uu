// rea decompile_all
// name: FUN_1000b3288
// address: 0x1000b3288
// body: available
// range: 0x1000b3288-0x1000b355b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000b354c to 0x1007dbf50 _$sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b3288(void)

{
  uint uVar1;
  undefined1 uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  double dVar13;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
  pcVar3 = *(code **)(unaff_x22 + 0x48);
  uVar7 = *(ulong *)(unaff_x22 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
  __s10Foundation4DateVACycfC(uVar7);
  uVar4 = uVar7;
  __s10Foundation4DateV1loiySbAC_ACtFZ(uVar7,uVar8);
  (*pcVar3)(uVar7,uVar9);
  if ((uVar4 & 1) == 0) {
    FUN_100401b14(0);
    FUN_1003fb4ec(FUN_1000b3588,0,0xd000000000000099,0x8000000100881de0,0xd000000000000020,
                  0x8000000100882180,0x1c3,0);
    uVar8 = 1;
  }
  else {
    FUN_1000b42dc();
    if ((((uint)uVar7 & 0xff) == 2) && (FUN_1000b462c(), ((uint)uVar7 & 0xff) == 2)) {
      if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + *(long *)(unaff_x22 + 0x50)) & 1) != 0) {
LAB_1000b34c0:
        dVar13 = *(double *)(unaff_x22 + 0x18) * 1000000000.0;
        if (0x7fefffffffffffff < (ulong)ABS(dVar13)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000b3554);
          (*pcVar3)();
        }
        if (dVar13 <= -1.0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000b3558);
          (*pcVar3)();
        }
        if (1.8446744073709552e+19 <= dVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000b355c);
          (*pcVar3)();
        }
        plVar6 = (long *)(ulong)*(uint *)(
                                         PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_100996068
                                         + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x58) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_1000b321c;
        __sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ((long)dVar13);
        return;
      }
    }
    else {
      lVar10 = *(long *)(unaff_x22 + 0x50);
      lVar12 = *(long *)(unaff_x22 + 0x20);
      uVar1 = (uint)uVar7 & 1;
      if (uVar1 != *(byte *)(lVar12 + lVar10)) {
        FUN_100401b14(0);
        lVar5 = 0x20;
        _swift_task_alloc();
        *(long *)(lVar5 + 0x10) = lVar12;
        uVar2 = (undefined1)uVar1;
        *(undefined1 *)(lVar5 + 0x18) = uVar2;
        FUN_1003fb48c(FUN_1000b48f8,lVar5,0xd000000000000099,0x8000000100881de0,0xd000000000000024,
                      0x80000001008821b0,0x1cd,0);
        _swift_task_dealloc(lVar5);
        *(undefined1 *)(lVar12 + lVar10) = uVar2;
      }
      if ((uVar7 & 1) != 0) goto LAB_1000b34c0;
    }
    FUN_100401b14(0);
    FUN_1003fb45c(FUN_1000b355c,0,0xd000000000000099,0x8000000100881de0,0xd000000000000020,
                  0x8000000100882180,0x1be,0);
    uVar8 = 0;
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(unaff_x22 + 0x48))(uVar9,*(undefined8 *)(unaff_x22 + 0x28));
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001000b34b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar8);
  return;
}

