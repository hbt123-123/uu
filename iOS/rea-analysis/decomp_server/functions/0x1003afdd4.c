// rea decompile_all
// name: FUN_1003afdd4
// address: 0x1003afdd4
// body: available
// range: 0x1003afdd4-0x1003affef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003afdd4(undefined8 *param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long alStack_c0 [3];
  code *local_a8;
  long local_a0;
  undefined8 *local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  local_a0 = param_3;
  local_98 = param_1;
  __s8Dispatch0A12TimeIntervalOMa();
  alStack_c0[1] = *(long *)(lVar2 + -8);
  alStack_c0[2] = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(alStack_c0[1] + 0x40));
  plVar9 = (long *)((long)alStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar3 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar10 = *(long *)(uVar3 - 8);
  uVar7 = uVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  uVar6 = (long)plVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar8 = uVar6 - extraout_x12;
  __s8Dispatch0A4TimeV3nowACyFZ(lVar8);
  __s8Dispatch0A4TimeV17uptimeNanosecondss6UInt64Vvg();
  lVar2 = _TtC8UUCommon23PromiseFrequencyLimiter::last;
  _swift_beginAccess(param_2 + _TtC8UUCommon23PromiseFrequencyLimiter::last,auStack_78,0,0);
  uVar4 = uVar6;
  (**(code **)(lVar10 + 0x10))(uVar6,param_2 + lVar2,uVar3);
  __s8Dispatch0A4TimeV17uptimeNanosecondss6UInt64Vvg();
  local_a8 = *(code **)(lVar10 + 8);
  (*local_a8)(uVar6,uVar3);
  if (uVar4 <= uVar7) {
    uVar7 = (uVar7 - uVar4) / 1000000;
    _swift_beginAccess(param_2 + lVar2,auStack_90,0x21,0);
    (**(code **)(lVar10 + 0x18))(param_2 + lVar2,lVar8,uVar3);
    _swift_endAccess(auStack_90);
    if (local_a0 < (long)uVar7) {
      plVar5 = (long *)&DAT_100a8bc08;
      FUN_100004bb4(&DAT_100a8bc08,&DAT_1008209f8);
      thunk_FUN_100613c8c();
    }
    else {
      *plVar9 = local_a0 - uVar7;
      lVar10 = alStack_c0[2];
      lVar2 = alStack_c0[1];
      (**(code **)(alStack_c0[1] + 0x68))
                (plVar9,*(undefined4 *)
                         PTR___s8Dispatch0A12TimeIntervalO12millisecondsyACSicACmFWC_100995f10,
                 alStack_c0[2]);
      plVar5 = plVar9;
      FUN_10061c930();
      (**(code **)(lVar2 + 8))(plVar9,lVar10);
    }
    (*local_a8)(lVar8,uVar3);
    *local_98 = plVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003afff0);
  (*pcVar1)();
}

