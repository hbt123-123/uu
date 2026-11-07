// rea decompile_all
// name: FUN_10003c764
// address: 0x10003c764
// body: available
// range: 0x10003c764-0x10003cac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10003c764(double param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ID self;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  double dVar7;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [24];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  char local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char local_68;
  
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar6 + 0x40));
  lVar2 = _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration;
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_e0 + lVar1;
  if ((*(byte *)(unaff_x20 + 0x120) & 1) == 0) {
    dVar7 = *(double *)(unaff_x20 + 0x118);
    self = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
    NSProcessInfo::systemUptime(self,"systemUptime");
    if (5.0 <= param_1 - dVar7) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(int *)((long)&uStack_f0 + lVar1) = (int)param_2;
      FUN_1003fb45c(FUN_10003f89c,auStack_100 + lVar1,0xd0000000000000a9,0x8000000100877660,
                    0xd00000000000003f,0x80000001008788f0,0x6b7,0);
    }
    else if ((param_3 & 1) == 0) {
      FUN_1000509d0(0xd000000000000014,0x8000000100878930);
    }
  }
  else {
    if (((((param_3 & 1) == 0) &&
         (lVar4 = *(long *)(unaff_x20 + 0x38), (*(byte *)(lVar4 + 0x14) & 1) == 0)) &&
        (-1 < *(int *)(lVar4 + 0x10))) && (*(long *)(lVar4 + 0x50) == 0)) {
      _swift_beginAccess(lVar4 + _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration,
                         auStack_d8,0,0);
      (**(code **)(lVar6 + 0x10))(puVar5,lVar4 + lVar2,lVar3);
      FUN_10008dac8(puVar5,0);
      (**(code **)(lVar6 + 8))(puVar5,lVar3);
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(int *)((long)&uStack_f0 + lVar1) = (int)param_2;
    *(int *)((long)&uStack_f0 + lVar1 + 4) = (int)param_3;
    FUN_1003fb48c(FUN_10003f884,auStack_100 + lVar1,0xd0000000000000a9,0x8000000100877660,
                  0xd00000000000003f,0x80000001008788f0,0x6c2,0);
    FUN_10003990c(&local_c0,param_2);
    if (local_98 != '\x02') {
      uStack_88 = uStack_b8;
      local_90 = local_c0;
      uStack_78 = uStack_a8;
      uStack_80 = uStack_b0;
      local_70 = local_a0;
      local_68 = local_98;
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined8 **)((long)&uStack_f0 + lVar1) = &local_90;
      FUN_1003fb48c(FUN_10003f894,auStack_100 + lVar1,0xd0000000000000a9,0x8000000100877660,
                    0xd00000000000003f,0x80000001008788f0,0x6c9,0);
    }
    if ((param_3 & 1) == 0) {
      FUN_1003fb48c(FUN_10002b85c,0,0xd0000000000000a9,0x8000000100877660,0xd00000000000003f,
                    0x80000001008788f0,0x6cc,0);
      FUN_1003fb48c(FUN_10003f88c);
      FUN_10003c3ec(param_2,param_3);
    }
  }
  return;
}

