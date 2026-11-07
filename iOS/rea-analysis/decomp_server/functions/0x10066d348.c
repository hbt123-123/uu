// rea decompile_all
// name: FUN_10066d348
// address: 0x10066d348
// body: available
// range: 0x10066d348-0x10066d423 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10066d420 to 0x1007df3c4 _swift_initStaticObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined ** FUN_10066d348(undefined **param_1,undefined1 *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined **unaff_x20;
  long unaff_x22;
  undefined *unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined *in_stack_00000000;
  long in_stack_00000008;
  undefined **in_stack_00000010;
  
  uVar4 = (ulong)param_1 & 0xff;
  UNRECOVERED_JUMPTABLE =
       (code *)((ulong)(&switchD_10066d374::switchdataD_10084c5d0)[uVar4] * 4 + 0x10066d378);
  ppuVar1 = param_1;
  switch(uVar4) {
  default:
    param_1 = &PTR_TargetProtocolDescriptor_100995000;
  case 0x38:
  case 0x46:
  case 0x86:
  case 0xd8:
  case 0xe6:
    param_1 = (undefined **)param_1[0x1d4];
switchD_10066d374_caseD_36:
switchD_10066d374_caseD_60:
    return param_1;
  case 1:
  case 0xd:
    break;
  case 2:
  case 0xe:
    break;
  case 3:
  case 0xf:
    break;
  case 4:
  case 0x10:
  case 0x24:
  case 0x2c:
  case 0x50:
switchD_10066d374_caseD_6a:
    break;
  case 5:
  case 0x11:
  case 0x1a:
  case 0x22:
  case 0x2a:
  case 0x3e:
  case 0x52:
  case 0x66:
  case 0x6e:
  case 0x76:
  case 0x7e:
  case 0xca:
  case 0xde:
  case 0xf2:
    break;
  case 6:
  case 0x12:
    break;
  case 7:
  case 0x13:
  case 0x1e:
  case 0x8c:
  case 0x3c:
    break;
  case 8:
  case 0x14:
  case 0x18:
  case 0x28:
    break;
  case 9:
  case 0x15:
  case 0x2e:
  case 0x56:
  case 0xce:
  case 0xf6:
    break;
  case 10:
  case 0x16:
    break;
  case 0xb:
  case 0x17:
    break;
  case 0x1c:
  case 0x41:
  case 0x79:
  case 0xe1:
    goto switchD_10066d468_switchD;
  case 0x1d:
    _swift_initStackObject();
  case 0x42:
  case 0x72:
  case 0x7a:
  case 0x82:
  case 0xe2:
    unaff_x20 = (undefined **)0x2;
    goto LAB_10066d5cc;
  case 0x20:
    goto switchD_10066d374_caseD_20;
  case 0x21:
  case 0x65:
  case 0x6d:
  case 0x75:
  case 0x7d:
    param_2 = &stack0x000001c0;
  case 0x19:
  case 0x29:
  case 0x3d:
  case 0x51:
  case 0xc9:
  case 0xdd:
  case 0xf1:
LAB_10066d5c0:
    _swift_initStackObject(param_1,param_2);
    unaff_x20 = (undefined **)0x0;
LAB_10066d5cc:
    FUN_100673404(unaff_x20);
LAB_10066d5e0:
    _swift_bridgeObjectRetain();
    param_1 = unaff_x24;
switchD_10066d374_caseD_55:
switchD_10066d374_caseD_2d:
switchD_10066d374_caseD_f4:
    unaff_x24 = param_1;
    FUN_100673628();
LAB_10066d7bc:
    if (unaff_x22 == 0) {
      _swift_release(unaff_x20);
LAB_10066d7fc:
      _swift_bridgeObjectRelease();
    }
    else {
      _swift_bridgeObjectRelease();
      _swift_errorRelease(unaff_x22);
      _swift_release(unaff_x20);
      unaff_x24 = (undefined **)PTR___swiftEmptyArrayStorage_100995ea0;
    }
LAB_10066d81c:
    ppuVar1 = (undefined **)&DAT_100ab7e18;
    FUN_100004bb4(&DAT_100ab7e18,&DAT_100848cd0);
    ppuVar2 = ppuVar1;
    _swift_allocObject();
    ppuVar2[3] = (undefined *)0x4;
    ppuVar2[2] = (undefined *)0x2;
    puVar3 = (undefined *)0x50;
    _swift_allocObject(ppuVar1,0x50,7);
    ppuVar1[3] = (undefined *)0x4;
    ppuVar1[2] = (undefined *)0x2;
    uVar4 = (ulong)unaff_x23 & 0xff;
    FUN_10066d348();
    thunk_FUN_1006654ec();
    ppuVar1[4] = unaff_x23;
    ppuVar1[5] = (undefined *)((ulong)puVar3 | 0x2000000000000000);
    *(undefined1 *)(ppuVar1 + 6) = 0;
    ppuVar1[8] = (undefined *)0x1000000000000000;
    ppuVar1[7] = (undefined *)0x0;
    *(undefined1 *)(ppuVar1 + 9) = 1;
    ppuVar2[4] = (undefined *)ppuVar1;
    ppuVar2[5] = (undefined *)0x0;
    *(undefined1 *)(ppuVar2 + 6) = 0;
    thunk_FUN_1006654ec();
    ppuVar2[7] = (undefined *)unaff_x24;
    ppuVar2[8] = puVar3;
    *(undefined1 *)(ppuVar2 + 9) = 1;
    unaff_x24 = ppuVar2;
    FUN_10062f234(ppuVar2,0,0);
    _swift_bridgeObjectRelease(ppuVar2);
    if (uVar4 == 0) {
      return unaff_x24;
    }
LAB_10066d8d8:
    if (SCARRY8((long)unaff_x24[2],0xb)) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10066d980);
      (*UNRECOVERED_JUMPTABLE)();
    }
    param_1 = unaff_x24;
    if ((long)(unaff_x24[2] + 0xb) < 0x100ab7909) {
      FUN_10066abd0(unaff_x24,&DAT_100ab7908);
      _swift_bridgeObjectRelease(unaff_x24);
      if (param_1[2] == &DAT_100ab7908) {
        return param_1;
      }
    }
    _swift_bridgeObjectRelease();
LAB_10066d928:
    FUN_10066cb9c();
    _swift_allocError(&DAT_1009e5530,param_1,0,0);
    *(undefined1 *)param_1 = 7;
    _swift_willThrow();
    return unaff_x24;
  case 0x2d:
  case 0xdc:
    goto switchD_10066d374_caseD_2d;
  case 0x36:
  case 0x5e:
  case 0xc0:
  case 0xd6:
  case 0xfe:
    goto switchD_10066d374_caseD_36;
  case 0x40:
  case 0x80:
    goto switchD_10066d374_caseD_40;
  case 0x43:
  case 0x73:
  case 0x7b:
  case 0x83:
  case 0xe3:
    FUN_100675e24();
    _swift_initStackObject();
    unaff_x20 = (undefined **)0x2;
    goto LAB_10066d788;
  case 0x4c:
    goto switchD_10066d374_caseD_4c;
  case 0x4d:
    param_1 = (undefined **)0x0;
  case 0x8d:
  case 0xed:
    FUN_1006730b4();
switchD_10066d374_caseD_54:
    _swift_initStackObject();
    param_1[2] = PTR___swiftEmptyArrayStorage_100995ea0;
    param_1[3] = (undefined *)0x0;
    ppuVar1 = (undefined **)&DAT_100ab7cb8;
    FUN_100004bb4(&DAT_100ab7cb8,&DAT_100848cc0);
    unaff_x20 = param_1;
switchD_10066d374_caseD_40:
    _swift_initStaticObject();
    unaff_x20[4] = (undefined *)ppuVar1;
switchD_10066d374_caseD_68:
    _swift_bridgeObjectRetain();
    FUN_1006727b8();
    goto LAB_10066d7bc;
  case 0x4e:
  case 0x8e:
  case 0xee:
    uVar4 = (ulong)param_2 & 0xff;
    in_stack_00000000 = unaff_x23;
    in_stack_00000008 = unaff_x22;
    in_stack_00000010 = unaff_x20;
  case 0xec:
    UNRECOVERED_JUMPTABLE =
         (code *)((long)(int)(&switchD_10066d468::switchdataD_10066d9cc)[uVar4] + 0x10066d45c);
switchD_10066d468_switchD:
                    /* WARNING: Could not recover jumptable at 0x00010066d468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  case 0x54:
    goto switchD_10066d374_caseD_54;
  case 0x55:
  case 0xcd:
  case 0xf5:
    goto switchD_10066d374_caseD_55;
  case 0x60:
    goto switchD_10066d374_caseD_60;
  case 100:
  case 0x6c:
  case 0x74:
  case 0x7c:
    goto LAB_10066d928;
  case 0x68:
    goto switchD_10066d374_caseD_68;
  case 0x69:
    goto switchD_10066d374_caseD_69;
  case 0x6a:
    goto switchD_10066d374_caseD_6a;
  case 0x70:
    goto switchD_10066d374_caseD_70;
  case 0x71:
  case 0x81:
    if ((undefined *)0x40 < unaff_x24[2]) goto LAB_10066d928;
  case 0xe0:
    if (((ulong)unaff_x23 & 0xff) == 0) {
switchD_10066d374_caseD_20:
      _swift_bridgeObjectRetain();
      return unaff_x24;
    }
    if (((uint)unaff_x23 & 0xff) != 0xc) {
LAB_10066d814:
      _swift_bridgeObjectRetain();
      goto LAB_10066d81c;
    }
    _swift_bridgeObjectRetain();
    goto LAB_10066d8d8;
  case 0x78:
    goto switchD_10066d374_caseD_78;
  case 0xa0:
    if ((undefined *)0x1c < unaff_x24[2]) goto switchD_10066d374_caseD_a9;
    goto LAB_10066d814;
  case 0xa1:
  case 0xac:
    goto switchD_10066d374_caseD_a1;
  case 0xa2:
    goto switchD_10066d374_caseD_a2;
  case 0xa3:
  case 0xae:
    _swift_initStackObject(param_1,&stack0x000000b8);
  case 0xa7:
  case 0xab:
    param_1 = (undefined **)0x1;
    FUN_100673404(1);
switchD_10066d374_caseD_a5:
    unaff_x20 = param_1;
switchD_10066d374_caseD_a6:
    goto LAB_10066d5e0;
  case 0xa4:
  case 0xaa:
  case 0xad:
    _swift_initStackObject();
    unaff_x20 = (undefined **)0x3;
LAB_10066d788:
    FUN_1006747e8(unaff_x20);
    _swift_bridgeObjectRetain();
    FUN_1006748ac();
    goto LAB_10066d7bc;
  case 0xa5:
  case 0xaf:
    goto switchD_10066d374_caseD_a5;
  case 0xa6:
    goto switchD_10066d374_caseD_a6;
  case 0xa8:
    FUN_1006746d8(0);
switchD_10066d374_caseD_a2:
    _swift_initStackObject();
switchD_10066d374_caseD_a1:
    unaff_x20 = (undefined **)0x3;
    goto LAB_10066d5cc;
  case 0xa9:
switchD_10066d374_caseD_a9:
    goto LAB_10066d928;
  case 200:
    _swift_initStackObject(param_1,&stack0x00000000);
    param_1[2] = PTR___swiftEmptyArrayStorage_100995ea0;
    param_1[3] = (undefined *)0x0;
    unaff_x25 = (undefined **)&DAT_100ab7cb8;
    FUN_100004bb4(&DAT_100ab7cb8,&DAT_100848cc0);
    ppuVar1 = unaff_x25;
    _swift_initStaticObject();
    unaff_x20 = param_1;
    goto switchD_10066d374_caseD_70;
  case 0xcc:
    goto switchD_10066d374_caseD_cc;
  case 0xf0:
    param_2 = &stack0x00000060;
    goto LAB_10066d5c0;
  case 0xf4:
    goto switchD_10066d374_caseD_f4;
  }
  param_1 = (undefined **)0x100ab7000;
switchD_10066d374_caseD_69:
  param_1 = param_1 + 0x1ca;
  FUN_100004bb4(param_1,&DAT_100848d10);
  _swift_initStaticObject();
  return param_1;
switchD_10066d374_caseD_70:
  unaff_x20[4] = (undefined *)ppuVar1;
  ppuVar1 = unaff_x25;
  _swift_initStaticObject(unaff_x25,&DAT_100ab1170);
  unaff_x20[5] = (undefined *)ppuVar1;
  _swift_initStaticObject(unaff_x25,&DAT_100ab1298);
  unaff_x20[6] = (undefined *)unaff_x25;
  _swift_bridgeObjectRetain();
  ppuVar1 = unaff_x24;
switchD_10066d374_caseD_cc:
switchD_10066d374_caseD_78:
  param_1 = unaff_x20;
  FUN_100668e34();
  if (unaff_x22 != 0) {
    _swift_errorRelease();
    _swift_bridgeObjectRelease();
    __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
              ("Fatal error",0xb,2,0,0xe000000000000000,"CryptoSwift/MD5.swift",0x15,2);
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10066d9cc);
    (*UNRECOVERED_JUMPTABLE)();
  }
  _swift_bridgeObjectRelease();
  unaff_x20 = param_1;
  unaff_x25 = ppuVar1;
switchD_10066d374_caseD_4c:
  unaff_x24 = unaff_x25;
  _swift_setDeallocating(param_1);
  _swift_bridgeObjectRelease(unaff_x20[2]);
  _swift_bridgeObjectRelease(unaff_x20[4]);
  _swift_bridgeObjectRelease(unaff_x20[5]);
  goto LAB_10066d7fc;
}

