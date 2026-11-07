// rea decompile_all
// name: FUN_1002f1148
// address: 0x1002f1148
// body: available
// range: 0x1002f1148-0x1002f1b73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002f13c4) */

void FUN_1002f1148(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  void *pvVar9;
  char *pcVar10;
  code *pcVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  code *pcVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  char acStack_1c0 [8];
  undefined8 *local_1b8;
  undefined *local_1b0;
  undefined8 *local_1a8;
  long local_1a0;
  ulong local_198;
  undefined8 local_190;
  code *local_188;
  ulong local_180;
  ulong local_178;
  undefined8 local_170;
  long local_168;
  char *local_160;
  char *local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  undefined *local_128;
  code *local_120;
  long local_118;
  undefined *local_110;
  undefined **local_108;
  undefined *local_100;
  long local_f8;
  undefined *local_f0 [3];
  long local_d8;
  undefined1 auStack_c8 [24];
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *local_98;
  code *local_90;
  undefined *local_88;
  
  lVar3 = 0;
  local_118 = param_1;
  FUN_1003423b0();
  pcVar10 = acStack_1c0 + -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_168 = lVar3;
  local_160 = pcVar10;
  FUN_1002c76a8();
  lVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40);
  puVar5 = (undefined *)0x0;
  local_158 = pcVar10 + -(lVar3 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_120 = *(code **)(puVar5 + -8);
  lVar20 = (long)(pcVar10 + -(lVar3 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)((long)local_120 + 0x40) + 0xfU & 0xfffffffffffffff0);
  ppuVar6 = (undefined **)0x0;
  local_100 = puVar5;
  __s8Dispatch0A3QoSVMa();
  local_128 = ppuVar6[-1];
  lVar21 = lVar20 - (*(long *)(local_128 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_108 = ppuVar6;
  __s10Foundation10URLRequestVMa();
  local_138 = *(long *)(lVar3 + -8);
  local_150 = *(long *)(local_138 + 0x40);
  uVar12 = local_150 + 0xfU & 0xfffffffffffffff0;
  local_148 = lVar21 - uVar12;
  lVar14 = local_148 - uVar12;
  lVar4 = 0;
  local_140 = lVar3;
  local_130 = lVar14 - uVar12;
  __s8Dispatch0A9PredicateOMa();
  lVar3 = *(long *)(lVar4 + -8);
  puVar13 = (undefined8 *)
            ((lVar14 - uVar12) - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0));
  puVar5 = &DAT_1009af040;
  _swift_allocObject(&DAT_1009af040,0x20,7);
  *(ulong *)(puVar5 + 0x10) = param_4;
  *(undefined8 *)(puVar5 + 0x18) = param_5;
  local_110 = puVar5;
  local_f8 = param_3;
  *puVar13 = *(undefined8 *)(param_3 + 0x30);
  (**(code **)(lVar3 + 0x68))
            (puVar13,*(undefined4 *)
                      PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_100995f80
             ,lVar4);
  local_178 = param_4;
  _swift_retain(param_4);
  local_170 = param_5;
  _swift_retain(param_5);
  puVar7 = puVar13;
  __s8Dispatch25_dispatchPreconditionTestySbAA0A9PredicateOF();
  (**(code **)(lVar3 + 8))(puVar13,lVar4);
  if (((ulong)puVar7 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x1002f1b74);
    (*pcVar11)();
  }
  uVar15 = *(undefined8 *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  FUN_10003f030(param_2,uVar15);
  (**(code **)(lVar3 + 8))(lVar14,uVar15,lVar3);
  pcVar17 = *(code **)(local_138 + 0x20);
  (*pcVar17)(local_130,lVar14,local_140);
  FUN_100312230();
  lVar14 = local_138;
  lVar4 = local_140;
  lVar3 = local_148;
  uVar15 = *(undefined8 *)(local_f8 + 0x20);
  local_188 = *(code **)(local_138 + 0x10);
  (*local_188)(local_148,local_130,local_140);
  local_180 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar12 = local_180 + 0x18 & (local_180 ^ 0xffffffffffffffff);
  local_1a0 = uVar12 + local_150;
  puVar5 = &DAT_1009af0b8;
  _swift_allocObject(&DAT_1009af0b8,local_1a0,local_180 | 7);
  lVar14 = local_118;
  *(long *)(puVar5 + 0x10) = local_118;
  local_198 = uVar12;
  (*pcVar17)(puVar5 + uVar12,lVar3,lVar4);
  local_90 = (code *)&DAT_1002f2020;
  local_b0 = PTR___NSConcreteStackBlock_100995490;
  local_a8 = 0x42000000;
  local_a0 = FUN_1000acdb4;
  local_98 = &DAT_1009af0d0;
  local_88 = puVar5;
  pvVar9 = __Block_copy(&local_b0);
  _swift_retain(lVar14);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar21);
  local_f0[0] = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar7 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar5 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar13 = &DAT_100a82c20;
  FUN_1000d61d8(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000);
  puVar8 = local_100;
  local_1b8 = puVar13;
  local_1b0 = puVar5;
  local_1a8 = puVar7;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar20,local_f0,puVar5,puVar13,local_100,puVar7);
  local_190 = uVar15;
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar21,lVar20,pvVar9);
  __Block_release(pvVar9);
  local_120 = *(code **)((long)local_120 + 8);
  (*local_120)(lVar20,puVar8);
  pcVar11 = *(code **)(local_128 + 8);
  (*pcVar11)(lVar21,local_108);
  _swift_release(local_88);
  plVar18 = *(long **)(lVar14 + _TtC9Alamofire7Request::mutableState);
  uVar15 = *(undefined8 *)(plVar18[2] + 0x10);
  _os_unfair_lock_lock(uVar15);
  lVar3 = *(long *)(*plVar18 + 0x60);
  _swift_beginAccess((long)plVar18 + lVar3,auStack_c8,0,0);
  pcVar10 = local_158;
  FUN_100082394((long)plVar18 + lVar3,local_158,FUN_1002c76a8);
  cVar1 = *pcVar10;
  FUN_1000d27dc(pcVar10,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar15);
  lVar3 = local_f8;
  if (cVar1 == '\x03') {
    pcVar11 = *(code **)(local_138 + 8);
  }
  else {
    FUN_1002e94e0(local_f0,lVar14);
    uVar12 = local_180;
    if (local_d8 != 0) {
      uVar16 = ~local_180;
      FUN_1000a0074(local_f0,&local_b0);
      lVar4 = _TtC9Alamofire7Request::id;
      lVar20 = 0;
      __s10Foundation4UUIDVMa();
      pcVar10 = local_160;
      (**(code **)(*(long *)(lVar20 + -8) + 0x10))(local_160,lVar14 + lVar4,lVar20);
      *(long *)(pcVar10 + *(int *)(local_168 + 0x14)) = lVar3;
      local_100 = local_98;
      local_120 = local_90;
      ppuVar6 = &local_b0;
      FUN_10003f030();
      lVar21 = local_130;
      lVar20 = local_140;
      lVar4 = local_148;
      local_108 = ppuVar6;
      (*local_188)(local_148,local_130,local_140);
      uVar16 = uVar12 + 0x20 & uVar16;
      uVar19 = local_150 + uVar16 + 7 & 0xfffffffffffffff8;
      puVar5 = &DAT_1009af158;
      _swift_allocObject(&DAT_1009af158,uVar19 + 0x10,uVar12 | 7);
      *(long *)(puVar5 + 0x10) = lVar3;
      *(long *)(puVar5 + 0x18) = lVar14;
      (*pcVar17)(puVar5 + uVar16,lVar4,lVar20);
      puVar8 = local_110;
      pcVar11 = local_120;
      *(code **)(puVar5 + uVar19) = FUN_1002f1b74;
      *(undefined **)((long)(puVar5 + uVar19) + 8) = local_110;
      pcVar17 = *(code **)(local_120 + 0x10);
      _swift_retain_n(lVar3,2);
      _swift_retain(lVar14);
      _swift_retain(puVar8);
      (*pcVar17)(lVar21,pcVar10,FUN_1002f2084,puVar5,local_100,pcVar11);
      _swift_release(puVar5);
      FUN_1000d27dc(pcVar10,FUN_1003423b0);
      (**(code **)(local_138 + 8))(lVar21,lVar20);
      FUN_10003f094(&local_b0);
      goto LAB_1002f1554;
    }
    FUN_100040bb4(local_f0,&DAT_100a84678,&DAT_100818f78);
    uVar12 = local_178;
    FUN_1002e7420(local_178,local_170);
    lVar4 = local_140;
    lVar3 = local_148;
    if ((uVar12 & 1) != 0) {
      (*local_188)(local_148,local_130,local_140);
      uVar12 = local_1a0 + 7U & 0xfffffffffffffff8;
      puVar5 = &DAT_1009af108;
      _swift_allocObject(&DAT_1009af108,uVar12 + 8,local_180 | 7);
      lVar2 = local_f8;
      *(long *)(puVar5 + 0x10) = local_f8;
      (*pcVar17)(puVar5 + local_198,lVar3,lVar4);
      *(long *)(puVar5 + uVar12) = lVar14;
      local_90 = thunk_FUN_1002f1c94;
      local_b0 = PTR___NSConcreteStackBlock_100995490;
      local_a8 = 0x42000000;
      local_a0 = FUN_1000acdb4;
      local_98 = &DAT_1009af120;
      local_88 = puVar5;
      pvVar9 = __Block_copy(&local_b0);
      _swift_retain(lVar14);
      _swift_retain(lVar2);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar21);
      puVar5 = local_100;
      local_f0[0] = PTR___swiftEmptyArrayStorage_100995ea0;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (lVar20,local_f0,local_1b0,local_1b8,local_100,local_1a8);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar21,lVar20,pvVar9);
      __Block_release(pvVar9);
      (*local_120)(lVar20,puVar5);
      (*pcVar11)(lVar21,local_108);
      (**(code **)(local_138 + 8))(local_130,lVar4);
      puVar8 = local_88;
      _swift_release(local_110);
      goto LAB_1002f1554;
    }
    pcVar11 = *(code **)(local_138 + 8);
  }
  (*pcVar11)(local_130,local_140);
  puVar8 = local_110;
LAB_1002f1554:
  _swift_release(puVar8);
  return;
}

