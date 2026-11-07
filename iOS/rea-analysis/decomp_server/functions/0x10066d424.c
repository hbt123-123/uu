// rea decompile_all
// name: FUN_10066d424
// address: 0x10066d424
// body: available
// range: 0x10066d424-0x10066d9cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10066d424(undefined *param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long unaff_x21;
  
  puVar6 = param_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2 & 0xff) {
  default:
    if (param_3 < *(long *)(param_1 + 0x10)) goto LAB_10066d928;
    goto switchD_10066d374_caseD_e0;
  case 1:
    lVar3 = 0;
    FUN_100669640();
    _swift_initStackObject();
    *(undefined **)(lVar3 + 0x10) = PTR___swiftEmptyArrayStorage_100995ea0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    puVar5 = &DAT_100ab7cb8;
    FUN_100004bb4(&DAT_100ab7cb8,&DAT_100848cc0);
    puVar4 = puVar5;
    _swift_initStaticObject();
    *(undefined **)(lVar3 + 0x20) = puVar4;
    puVar4 = puVar5;
    _swift_initStaticObject(puVar5,&DAT_100ab1170);
    *(undefined **)(lVar3 + 0x28) = puVar4;
    _swift_initStaticObject(puVar5,&DAT_100ab1298);
    *(undefined **)(lVar3 + 0x30) = puVar5;
    _swift_bridgeObjectRetain();
    FUN_100668e34();
    if (unaff_x21 != 0) {
      _swift_errorRelease();
      _swift_bridgeObjectRelease(param_1);
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                ("Fatal error",0xb,2,0,0xe000000000000000,"CryptoSwift/MD5.swift",0x15,2,0x3c,0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10066d9cc);
      (*pcVar2)();
    }
    _swift_bridgeObjectRelease(param_1);
    _swift_setDeallocating(lVar3);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x10));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x20));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x28));
    param_1 = *(undefined **)(lVar3 + 0x30);
    goto LAB_10066d7fc;
  case 2:
    lVar3 = 0;
    FUN_1006730b4();
    _swift_initStackObject();
    *(undefined **)(lVar3 + 0x10) = PTR___swiftEmptyArrayStorage_100995ea0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    puVar5 = &DAT_100ab7cb8;
    FUN_100004bb4(&DAT_100ab7cb8,&DAT_100848cc0);
    _swift_initStaticObject();
    *(undefined **)(lVar3 + 0x20) = puVar5;
    _swift_bridgeObjectRetain();
    FUN_1006727b8();
    goto LAB_10066d7bc;
  case 3:
    FUN_1006746d8(0);
    goto LAB_10066d5c0;
  case 4:
    FUN_1006746d8(0);
    goto LAB_10066d534;
  case 5:
    FUN_1006746d8(0);
    _swift_initStackObject();
    lVar3 = 2;
    goto LAB_10066d5cc;
  case 6:
    FUN_1006746d8(0);
    _swift_initStackObject();
    lVar3 = 3;
    goto LAB_10066d5cc;
  case 7:
    FUN_1006746d8(0);
LAB_10066d5c0:
    _swift_initStackObject();
    lVar3 = 0;
LAB_10066d5cc:
    FUN_100673404(lVar3);
LAB_10066d5e0:
    _swift_bridgeObjectRetain();
    FUN_100673628();
LAB_10066d7bc:
    if (unaff_x21 == 0) {
      _swift_release(lVar3);
LAB_10066d7fc:
      _swift_bridgeObjectRelease(param_1);
    }
    else {
      _swift_bridgeObjectRelease(param_1);
      _swift_errorRelease(unaff_x21);
      _swift_release(lVar3);
      puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    goto LAB_10066d81c;
  case 8:
    FUN_1006746d8(0);
LAB_10066d534:
    _swift_initStackObject();
    lVar3 = 1;
    FUN_100673404(1);
    goto LAB_10066d5e0;
  case 9:
    FUN_100675e24(0);
    _swift_initStackObject();
    lVar3 = 1;
    FUN_1006747e8(1);
    goto LAB_10066d79c;
  case 10:
    FUN_100675e24(0);
    _swift_initStackObject();
    lVar3 = 2;
    goto LAB_10066d788;
  case 0xb:
    FUN_100675e24(0);
    _swift_initStackObject();
    lVar3 = 3;
LAB_10066d788:
    FUN_1006747e8(lVar3);
LAB_10066d79c:
    _swift_bridgeObjectRetain();
    FUN_1006748ac();
    goto LAB_10066d7bc;
  case 0xd:
    if (0x10 < *(ulong *)(param_1 + 0x10)) goto LAB_10066d928;
    break;
  case 0xe:
    if (0x14 < *(ulong *)(param_1 + 0x10)) goto LAB_10066d928;
    break;
  case 0xf:
  case 0x13:
    if (0x1c < *(ulong *)(param_1 + 0x10)) goto LAB_10066d928;
    break;
  case 0x10:
  case 0x15:
    if (0x20 < *(ulong *)(param_1 + 0x10)) goto LAB_10066d928;
    goto switchD_10066d374_caseD_e0;
  case 0x11:
  case 0x16:
    if (0x30 < *(ulong *)(param_1 + 0x10)) goto LAB_10066d928;
    goto switchD_10066d374_caseD_e0;
  case 0x12:
  case 0x17:
    if (0x40 < *(ulong *)(param_1 + 0x10)) goto LAB_10066d928;
switchD_10066d374_caseD_e0:
    if ((param_2 & 0xff) == 0) {
      _swift_bridgeObjectRetain(param_1);
      return param_1;
    }
    if (((uint)param_2 & 0xff) != 0xc) break;
    _swift_bridgeObjectRetain(param_1);
    goto LAB_10066d8d8;
  case 0x14:
    if (0x20 < *(ulong *)(param_1 + 0x10)) goto LAB_10066d928;
  }
  _swift_bridgeObjectRetain(param_1);
LAB_10066d81c:
  puVar5 = &DAT_100ab7e18;
  FUN_100004bb4(&DAT_100ab7e18,&DAT_100848cd0);
  puVar4 = puVar5;
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 4;
  *(undefined8 *)(puVar4 + 0x10) = 2;
  uVar7 = 0x50;
  _swift_allocObject(puVar5,0x50,7);
  *(undefined8 *)(puVar5 + 0x18) = 4;
  *(undefined8 *)(puVar5 + 0x10) = 2;
  uVar1 = param_2 & 0xff;
  FUN_10066d348();
  thunk_FUN_1006654ec();
  *(ulong *)(puVar5 + 0x20) = param_2;
  *(ulong *)(puVar5 + 0x28) = uVar7 | 0x2000000000000000;
  puVar5[0x30] = 0;
  *(undefined8 *)(puVar5 + 0x40) = 0x1000000000000000;
  *(undefined8 *)(puVar5 + 0x38) = 0;
  puVar5[0x48] = 1;
  *(undefined **)(puVar4 + 0x20) = puVar5;
  *(undefined8 *)(puVar4 + 0x28) = 0;
  puVar4[0x30] = 0;
  thunk_FUN_1006654ec();
  *(undefined **)(puVar4 + 0x38) = puVar6;
  *(ulong *)(puVar4 + 0x40) = uVar7;
  puVar4[0x48] = 1;
  puVar6 = puVar4;
  FUN_10062f234(puVar4,0,0);
  _swift_bridgeObjectRelease(puVar4);
  if (uVar1 == 0) {
    return puVar6;
  }
LAB_10066d8d8:
  if (SCARRY8(*(long *)(puVar6 + 0x10),0xb)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10066d980);
    (*pcVar2)();
  }
  param_1 = puVar6;
  if (*(long *)(puVar6 + 0x10) + 0xb <= param_3) {
    FUN_10066abd0(puVar6,param_3);
    _swift_bridgeObjectRelease(puVar6);
    if (*(long *)(param_1 + 0x10) == param_3) {
      return param_1;
    }
  }
  _swift_bridgeObjectRelease();
LAB_10066d928:
  FUN_10066cb9c();
  _swift_allocError(&DAT_1009e5530,param_1,0,0);
  *param_1 = 7;
  _swift_willThrow();
  return puVar6;
}

