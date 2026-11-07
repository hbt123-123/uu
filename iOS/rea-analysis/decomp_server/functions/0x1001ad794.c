// rea decompile_all
// name: FUN_1001ad794
// address: 0x1001ad794
// body: available
// range: 0x1001ad794-0x1001adadf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001001ad924) */

ulong FUN_1001ad794(double param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,byte param_6)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  char *op;
  long extraout_x8;
  long unaff_x20;
  ID IVar8;
  long lVar9;
  undefined1 auStack_e0 [16];
  undefined4 auStack_d0 [2];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  lVar5 = 0;
  __s10Foundation4DateVMa();
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_88 = param_3;
  uStack_80 = param_4;
  local_78 = param_5;
  FUN_100008184(param_3,param_4);
  _swift_retain(param_5);
  __s10Foundation4DateVACycfC(auStack_c0 + lVar1);
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar9 + 8))(auStack_c0 + lVar1,lVar5);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1001adad8);
    (*pcVar4)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1001adadc);
    (*pcVar4)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1001adae0);
    (*pcVar4)();
  }
  FUN_100467b68((long)param_1);
  FUN_100407cdc(&local_a8,FUN_1001ae4b4,
                *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::seqGenerator),
                PTR___ss5Int64VN_100995cc0);
  FUN_100467964(local_a8);
  uVar3 = local_78;
  uVar7 = uStack_80;
  uVar2 = local_88;
  local_a8 = local_88;
  uStack_a0 = uStack_80;
  local_98 = local_78;
  uVar6 = local_88;
  FUN_100008184(local_88,uStack_80);
  FUN_100123d40();
  _swift_retain(uVar3);
  FUN_100537580(&local_b8,0,0,&DAT_1009c50b8,PTR___s10Foundation4DataVN_1009961e8,uVar6,
                &PTR_PTR_1009d16b0);
  FUN_100006cdc(uVar2,uVar7);
  _swift_release(uVar3);
  IVar8 = *(ID *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::controlled);
  uVar7 = local_b8;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(local_b8,uStack_b0);
  if (param_6 < 2) {
    if (param_6 == 0) {
      op = "ControlledSendControlData:data:";
    }
    else {
      op = "ControlledSendTextData:data:";
    }
  }
  else if (param_6 == 2) {
    op = "ControlledSendFileData:data:";
  }
  else if (param_6 == 3) {
    op = "ControlledSendBinaryData:data:";
  }
  else {
    op = "ControlledSendSignalData:data:";
  }
  IVar8 = _objc_msgSend(IVar8,op,param_2,uVar7);
  local_a8 = CONCAT44(local_a8._4_4_,(int)IVar8);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(int *)((long)auStack_d0 + lVar1) = (int)param_2;
  *(ulong **)((long)&uStack_c8 + lVar1) = &local_a8;
  FUN_1003fb48c(FUN_1001b186c,auStack_e0 + lVar1,0xd000000000000095,0x8000000100877f50,
                0xd00000000000001f,0x800000010089aaf0,0x166,0);
  FUN_100006cdc(local_b8,uStack_b0);
  uVar7 = local_78;
  FUN_100006cdc(local_88,uStack_80);
  _swift_release(uVar7);
  return local_a8 & 0xffffffff;
}

