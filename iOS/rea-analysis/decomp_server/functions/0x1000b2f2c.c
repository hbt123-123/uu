// rea decompile_all
// name: FUN_1000b2f2c
// address: 0x1000b2f2c
// body: available
// range: 0x1000b2f2c-0x1000b321b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000b320c to 0x1007dbf50 _$sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b2f2c(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x22;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  double dVar13;
  
  uVar5 = *(ulong *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar10 = *(long *)(unaff_x22 + 0x30);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x10);
  __s10Foundation4DateVACycfC(uVar5);
  __s10Foundation4DateV18addingTimeIntervalyACSdF(uVar2,uVar12);
  pcVar9 = *(code **)(lVar10 + 8);
  *(code **)(unaff_x22 + 0x48) = pcVar9;
  (*pcVar9)(uVar5,uVar8);
  *(undefined8 *)(unaff_x22 + 0x50) = _TtC14UURemoteServer17LockScreenManager::currentScreenIsLocked
  ;
  __s10Foundation4DateVACycfC(uVar5);
  uVar4 = uVar5;
  __s10Foundation4DateV1loiySbAC_ACtFZ(uVar5,uVar2);
  (*pcVar9)(uVar5,uVar8);
  if ((uVar4 & 1) == 0) {
    FUN_100401b14(0);
    FUN_1003fb4ec(FUN_1000b3588,0,0xd000000000000099,0x8000000100881de0,0xd000000000000020,
                  0x8000000100882180,0x1c3,0);
    uVar8 = 1;
  }
  else {
    FUN_1000b42dc();
    if ((((uint)uVar5 & 0xff) == 2) && (FUN_1000b462c(), ((uint)uVar5 & 0xff) == 2)) {
      if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + *(long *)(unaff_x22 + 0x50)) & 1) != 0) {
LAB_1000b3180:
        dVar13 = *(double *)(unaff_x22 + 0x18) * 1000000000.0;
        if (0x7fefffffffffffff < (ulong)ABS(dVar13)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1000b3214);
          (*pcVar9)();
        }
        if (dVar13 <= -1.0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1000b3218);
          (*pcVar9)();
        }
        if (1.8446744073709552e+19 <= dVar13) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1000b321c);
          (*pcVar9)();
        }
        plVar7 = (long *)(ulong)*(uint *)(
                                         PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_100996068
                                         + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x58) = plVar7;
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_1000b321c;
        __sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ((long)dVar13);
        return;
      }
    }
    else {
      lVar10 = *(long *)(unaff_x22 + 0x50);
      lVar11 = *(long *)(unaff_x22 + 0x20);
      uVar1 = (uint)uVar5 & 1;
      if (uVar1 != *(byte *)(lVar11 + lVar10)) {
        FUN_100401b14(0);
        lVar6 = 0x20;
        _swift_task_alloc();
        *(long *)(lVar6 + 0x10) = lVar11;
        uVar3 = (undefined1)uVar1;
        *(undefined1 *)(lVar6 + 0x18) = uVar3;
        FUN_1003fb48c(FUN_1000b48f8,lVar6,0xd000000000000099,0x8000000100881de0,0xd000000000000024,
                      0x80000001008821b0,0x1cd,0);
        _swift_task_dealloc(lVar6);
        *(undefined1 *)(lVar11 + lVar10) = uVar3;
      }
      if ((uVar5 & 1) != 0) goto LAB_1000b3180;
    }
    FUN_100401b14(0);
    FUN_1003fb45c(FUN_1000b355c,0,0xd000000000000099,0x8000000100881de0,0xd000000000000020,
                  0x8000000100882180,0x1be,0);
    uVar8 = 0;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(unaff_x22 + 0x48))(uVar2,*(undefined8 *)(unaff_x22 + 0x28));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x0001000b3178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar8);
  return;
}

