// rea decompile_all
// name: FUN_1000b76b4
// address: 0x1000b76b4
// body: available
// range: 0x1000b76b4-0x1000b7a17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1000b76b4(long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  code *pcVar3;
  undefined *puVar4;
  void *aBlock;
  ID IVar5;
  undefined8 uVar6;
  long unaff_x20;
  int iVar7;
  undefined1 auStack_c0 [16];
  long *local_b0;
  undefined2 local_a8;
  undefined1 auStack_98 [24];
  long *local_80;
  undefined8 uStack_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  FUN_1000b7360();
  FUN_1003db8c4();
  (**(code **)(*param_1 + 0x108))(&local_80);
  _swift_release();
  plVar2 = local_80;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0xe8))();
    _swift_release(plVar2);
    if (((uint)param_2 >> 0x10 & 1) == 0) {
      if (param_1 == (long *)0x0 && (((uint)param_2 ^ 0xffffffff) & 0xffff) == 0) {
        FUN_100401b14(0);
        pcVar3 = FUN_1000bf388;
        uVar6 = 0x337;
      }
      else {
        plVar2 = param_1;
        FUN_1000bf3b4(param_1,param_2);
        iVar1 = iVar7;
        __s6Darwin5noErrs5Int32Vvg();
        FUN_100401b14(0);
        iVar7 = (int)plVar2;
        if (iVar7 == iVar1) {
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_a8 = (undefined2)param_2;
          local_b0 = param_1;
          FUN_1003fb48c(FUN_1000c1394,auStack_c0,0xd00000000000009f,0x8000000100882d60,
                        0xd000000000000019,0x8000000100883440,0x33d,0);
          return;
        }
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_b0 = (long *)CONCAT44(local_b0._4_4_,iVar7);
        FUN_1003fb4bc(FUN_1000c1334,auStack_c0,0xd00000000000009f,0x8000000100882d60,
                      0xd000000000000019,0x8000000100883440,0x341,0);
        puVar4 = &DAT_10099b050;
        _swift_allocObject(&DAT_10099b050,0x18,7);
        _swift_weakInit(puVar4 + 0x10);
        local_60 = FUN_1000c133c;
        local_80 = (long *)PTR___NSConcreteStackBlock_100995490;
        uStack_78 = 0x42000000;
        local_70 = FUN_1000a8c3c;
        puStack_68 = &DAT_10099b1a8;
        local_58 = puVar4;
        aBlock = __Block_copy(&local_80);
        _swift_release(local_58);
        IVar5 = NSEvent::addGlobalMonitorForEventsMatchingMask_handler_
                          ((ID)&_OBJC_CLASS___NSEvent,
                           "addGlobalMonitorForEventsMatchingMask:handler:",0x400,aBlock);
        __Block_release(aBlock);
        if (IVar5 == 0) {
          uStack_78 = 0;
          local_80 = (long *)0x0;
          puStack_68 = (undefined *)0x0;
          local_70 = (code *)0x0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_80,IVar5);
          _swift_unknownObjectRelease(IVar5);
        }
        _swift_beginAccess(unaff_x20 + 0x20,auStack_98,0x21,0);
        FUN_1000c1344(&local_80,unaff_x20 + 0x20);
        _swift_endAccess(auStack_98);
        pcVar3 = FUN_1000bfb28;
        uVar6 = 0x34c;
      }
      goto LAB_1000b7824;
    }
  }
  FUN_100401b14(0);
  pcVar3 = FUN_1000bf35c;
  uVar6 = 0x333;
LAB_1000b7824:
  FUN_1003fb48c(pcVar3,0,0xd00000000000009f,0x8000000100882d60,0xd000000000000019,0x8000000100883440
                ,uVar6,0);
  return;
}

