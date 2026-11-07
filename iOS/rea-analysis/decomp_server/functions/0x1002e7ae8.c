// rea decompile_all
// name: FUN_1002e7ae8
// address: 0x1002e7ae8
// body: available
// range: 0x1002e7ae8-0x1002e8433 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002e7d10) */

void FUN_1002e7ae8(long param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  code *pcVar14;
  code *pcVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *local_190 [2];
  long local_180;
  ulong local_178;
  undefined8 local_170;
  ulong local_168;
  long local_160;
  code *local_158;
  long local_150;
  long local_148;
  char *local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  code *local_118;
  code *local_110;
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
  
  lVar2 = 0;
  FUN_1003423b0();
  lVar11 = (long)local_190 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_150 = lVar2;
  local_148 = lVar11;
  FUN_1002c76a8();
  pcVar9 = (char *)(lVar11 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar2 = 0;
  local_140 = pcVar9;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_110 = *(code **)(lVar2 + -8);
  lVar18 = (long)pcVar9 - (*(long *)((long)local_110 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_100 = (undefined *)lVar2;
  __s8Dispatch0A3QoSVMa();
  local_118 = *(code **)(lVar3 + -8);
  lVar20 = lVar18 - (*(long *)((long)local_118 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_108 = (undefined **)lVar3;
  __s10Foundation10URLRequestVMa();
  local_128 = *(long *)(lVar2 + -8);
  local_138 = *(long *)(local_128 + 0x40);
  uVar10 = local_138 + 0xfU & 0xfffffffffffffff0;
  local_130 = lVar20 - uVar10;
  lVar11 = local_130 - uVar10;
  lVar3 = 0;
  local_120 = lVar2;
  local_f8 = lVar11 - uVar10;
  __s8Dispatch0A9PredicateOMa();
  lVar2 = *(long *)(lVar3 + -8);
  puVar17 = (undefined8 *)
            ((lVar11 - uVar10) - (*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0));
  *puVar17 = *(undefined8 *)(param_3 + 0x30);
  (**(code **)(lVar2 + 0x68))
            (puVar17,*(undefined4 *)
                      PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_100995f80
             ,lVar3);
  puVar4 = puVar17;
  __s8Dispatch25_dispatchPreconditionTestySbAA0A9PredicateOF();
  (**(code **)(lVar2 + 8))(puVar17,lVar3);
  if (((ulong)puVar4 & 1) != 0) {
    uVar12 = *(undefined8 *)(param_2 + 0x18);
    lVar2 = *(long *)(param_2 + 0x20);
    FUN_10003f030(param_2,uVar12);
    (**(code **)(lVar2 + 8))(lVar11,uVar12,lVar2);
    pcVar14 = *(code **)(local_128 + 0x20);
    (*pcVar14)(local_f8,lVar11,local_120);
    FUN_100312230();
    lVar11 = local_120;
    lVar3 = local_128;
    lVar2 = local_130;
    uVar12 = *(undefined8 *)(param_3 + 0x20);
    local_158 = *(code **)(local_128 + 0x10);
    local_160 = param_3;
    (*local_158)(local_130,local_f8,local_120);
    local_168 = (ulong)*(byte *)(lVar3 + 0x50);
    uVar10 = local_168 + 0x18 & (local_168 ^ 0xffffffffffffffff);
    local_180 = uVar10 + local_138;
    puVar5 = &DAT_1009aeca8;
    _swift_allocObject(&DAT_1009aeca8,local_180,local_168 | 7);
    *(long *)(puVar5 + 0x10) = param_1;
    local_178 = uVar10;
    (*pcVar14)(puVar5 + uVar10,lVar2,lVar11);
    local_90 = (code *)&DAT_1002f0b54;
    local_b0 = PTR___NSConcreteStackBlock_100995490;
    local_a8 = 0x42000000;
    local_a0 = FUN_1000acdb4;
    local_98 = &DAT_1009aecc0;
    local_88 = puVar5;
    pvVar6 = __Block_copy(&local_b0);
    _swift_retain(param_1);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar20);
    local_f0[0] = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar4 = &DAT_100a82c10;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar17 = (undefined8 *)&DAT_100a82c18;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar7 = &DAT_100a82c20;
    FUN_1000d61d8(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000);
    puVar5 = local_100;
    local_190[0] = puVar17;
    local_190[1] = puVar4;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar18,local_f0,puVar17,puVar7,local_100,puVar4);
    local_170 = uVar12;
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar20,lVar18,pvVar6);
    __Block_release(pvVar6);
    local_110 = *(code **)((long)local_110 + 8);
    (*local_110)(lVar18,puVar5);
    local_118 = *(code **)((long)local_118 + 8);
    (*local_118)(lVar20,local_108);
    _swift_release(local_88);
    plVar16 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
    uVar12 = *(undefined8 *)(plVar16[2] + 0x10);
    _os_unfair_lock_lock(uVar12);
    lVar2 = *(long *)(*plVar16 + 0x60);
    _swift_beginAccess((long)plVar16 + lVar2,auStack_c8,0,0);
    pcVar9 = local_140;
    FUN_100082394((long)plVar16 + lVar2,local_140,FUN_1002c76a8);
    cVar1 = *pcVar9;
    FUN_1000d27dc(pcVar9,FUN_1002c76a8);
    _os_unfair_lock_unlock(uVar12);
    lVar2 = local_160;
    if (cVar1 == '\x03') {
      (**(code **)(local_128 + 8))(local_f8,local_120);
    }
    else {
      FUN_1002e94e0(local_f0,param_1);
      uVar10 = local_168;
      if (local_d8 == 0) {
        FUN_100040bb4(local_f0,&DAT_100a84678,&DAT_100818f78);
        lVar11 = local_120;
        lVar3 = local_130;
        (*local_158)(local_130,local_f8,local_120);
        uVar10 = local_180 + 7U & 0xfffffffffffffff8;
        puVar5 = &DAT_1009aecf8;
        _swift_allocObject(&DAT_1009aecf8,uVar10 + 8,local_168 | 7);
        *(long *)(puVar5 + 0x10) = lVar2;
        (*pcVar14)(puVar5 + local_178,lVar3,lVar11);
        *(long *)(puVar5 + uVar10) = param_1;
        local_90 = thunk_FUN_1002f1c94;
        local_b0 = PTR___NSConcreteStackBlock_100995490;
        local_a8 = 0x42000000;
        local_a0 = FUN_1000acdb4;
        local_98 = &DAT_1009aed10;
        local_88 = puVar5;
        pvVar6 = __Block_copy(&local_b0);
        _swift_retain(param_1);
        _swift_retain(lVar2);
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar20);
        puVar5 = local_100;
        local_f0[0] = PTR___swiftEmptyArrayStorage_100995ea0;
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (lVar18,local_f0,local_190[0],puVar7,local_100,local_190[1]);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar20,lVar18,pvVar6);
        __Block_release(pvVar6);
        (*local_110)(lVar18,puVar5);
        (*local_118)(lVar20,local_108);
        (**(code **)(local_128 + 8))(local_f8,lVar11);
        _swift_release(local_88);
      }
      else {
        uVar13 = ~local_168;
        FUN_1000a0074(local_f0,&local_b0);
        lVar3 = _TtC9Alamofire7Request::id;
        lVar18 = 0;
        __s10Foundation4UUIDVMa();
        lVar11 = local_148;
        (**(code **)(*(long *)(lVar18 + -8) + 0x10))(local_148,param_1 + lVar3,lVar18);
        *(long *)(lVar11 + *(int *)(local_150 + 0x14)) = lVar2;
        local_100 = local_98;
        local_110 = local_90;
        ppuVar8 = &local_b0;
        FUN_10003f030();
        lVar18 = local_120;
        lVar3 = local_130;
        local_108 = ppuVar8;
        (*local_158)(local_130,local_f8,local_120);
        uVar13 = uVar10 + 0x20 & uVar13;
        uVar19 = local_138 + uVar13 + 7 & 0xfffffffffffffff8;
        puVar5 = &DAT_1009aed48;
        _swift_allocObject(&DAT_1009aed48,uVar19 + 0x10,uVar10 | 7);
        *(long *)(puVar5 + 0x10) = lVar2;
        *(long *)(puVar5 + 0x18) = param_1;
        (*pcVar14)(puVar5 + uVar13,lVar3,lVar18);
        pcVar14 = local_110;
        *(code **)(puVar5 + uVar19) = FUN_100004ad8;
        *(undefined8 *)((long)(puVar5 + uVar19) + 8) = 0;
        pcVar15 = *(code **)(local_110 + 0x10);
        _swift_retain_n(lVar2,2);
        _swift_retain(param_1);
        lVar2 = local_f8;
        (*pcVar15)(local_f8,lVar11,0x1002f0b68,puVar5,local_100,pcVar14);
        _swift_release(puVar5);
        FUN_1000d27dc(lVar11,FUN_1003423b0);
        (**(code **)(local_128 + 8))(lVar2,lVar18);
        FUN_10003f094(&local_b0);
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x1002e8434);
  (*pcVar14)();
}

