// rea decompile_all
// name: FUN_1001ba07c
// address: 0x1001ba07c
// body: available
// range: 0x1001ba07c-0x1001ba40f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001ba3e8 to 0x1001ba88c FUN_1001ba88c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001ba07c(ulong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
  uVar9 = *(ulong *)(unaff_x22 + 0xf8);
  if ((param_1 & 1) == 0) {
    FUN_1001bb85c(0);
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
    if (DAT_100a73bd8 != -1) {
      _swift_once(&DAT_100a73bd8,FUN_1001ba814);
    }
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar9,DAT_100a7cd60);
    if ((uVar9 & 1) == 0) {
      *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0xf8);
      _swift_errorRetain(*(undefined8 *)(unaff_x22 + 0xf8));
      puVar4 = &DAT_100a75b40;
      FUN_100004bb4(&DAT_100a75b40,&DAT_100809bd0);
      uVar9 = unaff_x22 + 0xa8;
      _swift_dynamicCast(uVar9,unaff_x22 + 200,puVar4,&DAT_1009bb090,6);
      if ((uVar9 & 1) != 0) {
        lVar8 = *(long *)(unaff_x22 + 0xa8);
        uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
        uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
        uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
        if ((lVar8 == 0x3e9) || (lVar8 == 0x460)) {
          FUN_100401b14(0);
          lVar5 = 0x30;
          _swift_task_alloc();
          *(long *)(lVar5 + 0x10) = lVar8;
          *(undefined8 *)(lVar5 + 0x18) = uVar3;
          *(undefined8 *)(lVar5 + 0x20) = uVar10;
          *(undefined8 *)(lVar5 + 0x28) = uVar1;
          FUN_1003fb4ec(FUN_1001bb8a8,lVar5,0xd000000000000099,0x800000010089ad60,0xd00000000000001f
                        ,0x800000010089c580,0x75,0);
          _swift_task_dealloc(lVar5);
          _swift_willThrow();
          _swift_bridgeObjectRelease(uVar10);
          _swift_release(uVar1);
          goto LAB_1001ba28c;
        }
        _swift_bridgeObjectRelease(uVar10);
        _swift_release(uVar1);
      }
      lVar5 = *(long *)(unaff_x22 + 0xe0);
      lVar8 = *(long *)(lVar5 + 0x20);
      if (lVar8 == 0) {
        lVar5 = 0;
      }
      else if (lVar8 < 5) {
        *(long *)(lVar5 + 0x18) = lVar8;
        lVar5 = lVar8;
      }
      else {
        lVar8 = *(long *)(lVar5 + 0x18);
        if (lVar8 + 0x4000000000000000 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001ba40c);
          (*pcVar2)();
        }
        lVar6 = 5;
        FUN_1001e5f14();
        lVar8 = lVar8 * 2;
        lVar5 = lVar6 + 1 + lVar8;
        if (SCARRY8(lVar6 + 1,lVar8)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001ba410);
          (*pcVar2)();
        }
        lVar8 = *(long *)(unaff_x22 + 0xe0);
        if (299 < lVar5) {
          lVar5 = 300;
        }
        *(long *)(lVar8 + 0x18) = lVar5;
        lVar8 = *(long *)(lVar8 + 0x20);
      }
      if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001ba408);
        (*pcVar2)();
      }
      uVar10 = *(undefined8 *)(unaff_x22 + 0xf8);
      *(long *)(*(long *)(unaff_x22 + 0xe0) + 0x20) = lVar8 + 1;
      FUN_100401b14(0);
      lVar8 = 0x20;
      _swift_task_alloc();
      *(long *)(lVar8 + 0x10) = lVar5;
      *(undefined8 *)(lVar8 + 0x18) = uVar10;
      FUN_1003fb48c(FUN_1001bb8a0,lVar8,0xd000000000000099,0x800000010089ad60,0xd00000000000001f,
                    0x800000010089c580,0x7b,0);
      _swift_task_dealloc(lVar8);
      plVar7 = (long *)0x50;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x100) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_1001ba410;
      FUN_1001ba88c(lVar5);
      return;
    }
    FUN_100401b14(0);
    FUN_1003fb4ec(FUN_1001ba594,0,0xd000000000000099,0x800000010089ad60,0xd00000000000001f,
                  0x800000010089c580,0x6e,0);
    _swift_willThrow();
  }
  else {
    uVar3 = 0;
    __sScEMa(0);
    uVar10 = uVar3;
    FUN_1001bb8b4();
    _swift_allocError(uVar3,uVar10,0,0);
    __sS2cEycfC(uVar10);
    _swift_willThrow();
    _swift_errorRelease(uVar9);
  }
LAB_1001ba28c:
                    /* WARNING: Could not recover jumptable at 0x0001001ba2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

