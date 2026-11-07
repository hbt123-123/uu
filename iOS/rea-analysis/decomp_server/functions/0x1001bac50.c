// rea decompile_all
// name: FUN_1001bac50
// address: 0x1001bac50
// body: available
// range: 0x1001bac50-0x1001bb0d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001bafb8 to 0x1003f124c FUN_1003f124c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001bac50(void)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  __sScTss5NeverORszABRs_rlE17checkCancellationyyKFZ();
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar7 = DAT_100b360a8;
  *(long *)(unaff_x22 + 0x480) = DAT_100b360a8;
  lVar7 = *(long *)(lVar7 + 0x10);
  uVar2 = lVar7 + 0x10;
  _swift_beginAccess(uVar2,unaff_x22 + 0x400,0,0);
  if ((*(byte *)(lVar7 + 0x18) & 1) != 0) {
    if (DAT_100a73bd8 != -1) {
      _swift_once(&DAT_100a73bd8,FUN_1001ba814);
    }
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x0001001bacfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  FUN_100122344();
  if ((uVar2 & 0xff) == 0) {
    uVar8 = 0xe700000000000000;
    uVar2 = 0x6e776f6e6b6e75;
LAB_1001bad38:
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,uVar8,0x7473657567,0xe500000000000000,0);
    _swift_bridgeObjectRelease(uVar8);
    if ((uVar2 & 1) == 0) {
      cVar1 = *(char *)(unaff_x22 + 0x441);
      FUN_100401b14(0);
      if (cVar1 == '\x01') {
        FUN_1003fb45c(FUN_1001ba7bc,0,0xd000000000000099,0x800000010089ad60,0xd000000000000022,
                      0x800000010089c630,0xaa,0);
        *(undefined8 *)(unaff_x22 + 0x448) = 0xffffffffffffffff;
        *(undefined8 *)(unaff_x22 + 0x450) = 0;
        *(undefined1 *)(unaff_x22 + 0x458) = 1;
        puVar4 = &DAT_100a7cec8;
        FUN_100004bb4(&DAT_100a7cec8,&DAT_100811920);
        puVar5 = &DAT_100a7ced0;
        FUN_1001bb8f8(&DAT_100a7ced0,&TargetProtocolConformanceDescriptor_100820bb0);
        puVar6 = &DAT_100a7ced8;
        FUN_1001bb8f8(&DAT_100a7ced8,&TargetProtocolConformanceDescriptor_100820bd8);
        lVar7 = unaff_x22 + 0x448;
        FUN_10039e070(lVar7,puVar4,0,0,0,&DAT_1009b82f0,puVar4,&PTR_PTR_100a8bc30,puVar5,puVar6);
        *(long *)(unaff_x22 + 0x4a0) = lVar7;
        plVar3 = (long *)0x50;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x4a8) = plVar3;
        *plVar3 = unaff_x22;
        plVar3[1] = (long)FUN_1001bb31c;
        lVar7 = unaff_x22 + 0x170;
      }
      else {
        FUN_1003fb45c(FUN_1001ba7e8,0,0xd000000000000099,0x800000010089ad60,0xd000000000000022,
                      0x800000010089c630,0xb0,0);
        *(undefined8 *)(unaff_x22 + 0x438) = 0;
        *(undefined8 *)(unaff_x22 + 0x430) = 0xffffffffffffffff;
        *(undefined1 *)(unaff_x22 + 0x440) = 0;
        puVar4 = &DAT_100a7cec8;
        FUN_100004bb4(&DAT_100a7cec8,&DAT_100811920);
        puVar5 = &DAT_100a7ced0;
        FUN_1001bb8f8(&DAT_100a7ced0,&TargetProtocolConformanceDescriptor_100820bb0);
        puVar6 = &DAT_100a7ced8;
        FUN_1001bb8f8(&DAT_100a7ced8,&TargetProtocolConformanceDescriptor_100820bd8);
        lVar7 = unaff_x22 + 0x430;
        FUN_10039e070(lVar7,puVar4,0,0,0,&DAT_1009b82f0,puVar4,&PTR_PTR_100a8bc30,puVar5,puVar6);
        *(long *)(unaff_x22 + 0x4b8) = lVar7;
        plVar3 = (long *)0x50;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x4c0) = plVar3;
        *plVar3 = unaff_x22;
        plVar3[1] = (long)FUN_1001bb560;
        lVar7 = unaff_x22 + 0x10;
      }
      goto LAB_1001bafa4;
    }
  }
  else {
    if (((uint)uVar2 & 0xff) == 1) {
      uVar8 = 0xe400000000000000;
      uVar2 = 0x72657375;
      goto LAB_1001bad38;
    }
    _swift_bridgeObjectRelease(0xe500000000000000);
  }
  FUN_100401b14(0);
  FUN_1003fb45c(FUN_1001ba790,0,0xd000000000000099,0x800000010089ad60,0xd000000000000022,
                0x800000010089c630,0xa3,0);
  *(undefined8 *)(unaff_x22 + 0x468) = 0;
  *(undefined8 *)(unaff_x22 + 0x460) = 0xffffffffffffffff;
  *(undefined1 *)(unaff_x22 + 0x470) = 8;
  puVar4 = &DAT_100a7cec8;
  FUN_100004bb4(&DAT_100a7cec8,&DAT_100811920);
  puVar5 = &DAT_100a7ced0;
  FUN_1001bb8f8(&DAT_100a7ced0,&TargetProtocolConformanceDescriptor_100820bb0);
  puVar6 = &DAT_100a7ced8;
  FUN_1001bb8f8(&DAT_100a7ced8,&TargetProtocolConformanceDescriptor_100820bd8);
  lVar7 = unaff_x22 + 0x460;
  FUN_10039e070(lVar7,puVar4,0,0,0,&DAT_1009b82f0,puVar4,&PTR_PTR_100a8bc30,puVar5,puVar6);
  *(long *)(unaff_x22 + 0x488) = lVar7;
  plVar3 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x490) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1001bb0d4;
  lVar7 = unaff_x22 + 0x220;
LAB_1001bafa4:
  FUN_1003f124c(plVar3,lVar7);
  return;
}

