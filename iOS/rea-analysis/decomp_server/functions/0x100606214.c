// rea decompile_all
// name: FUN_100606214
// address: 0x100606214
// body: available
// range: 0x100606214-0x100606bff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100606214(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  void *pvVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 auStack_190 [2];
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  code *local_148;
  code *local_140;
  long local_138;
  ulong local_130;
  long local_128;
  long local_120;
  long local_118;
  code *local_110;
  long local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long *local_d8;
  long local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *local_98;
  code *local_90;
  byte local_88;
  byte local_87;
  undefined1 auStack_80 [32];
  
  lVar14 = *param_2;
  lVar2 = 0;
  local_d8 = param_2;
  __s8Dispatch0A3QoSVMa();
  local_160 = *(long *)(lVar2 + -8);
  lVar19 = (long)&local_180 - (*(long *)(local_160 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_168 = lVar19;
  local_158 = lVar2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar13 = *(long *)(lVar3 + -8);
  uVar12 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_180 = lVar19 - uVar12;
  lVar2 = local_180 - uVar12;
  puVar4 = &DAT_100aaffc0;
  local_170 = lVar2;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  local_130 = *(ulong *)(puVar4 + -8);
  local_128 = *(long *)(local_130 + 0x40);
  uVar12 = local_128 + 0xfU & 0xfffffffffffffff0;
  local_178 = lVar2 - uVar12;
  local_d0 = local_178 - uVar12;
  local_f0 = local_d0 - uVar12;
  local_e8 = local_f0 - uVar12;
  lVar19 = local_e8 - uVar12;
  local_110 = *(code **)(lVar13 + 0x38);
  local_150 = lVar13;
  local_e0 = lVar3;
  (*local_110)(lVar19,1,1,lVar3);
  uVar21 = *(undefined8 *)(lVar14 + 0x50);
  puVar4 = &DAT_100aaffb8;
  FUN_100004c48(&DAT_100aaffb8,&DAT_100848630);
  lVar2 = 0;
  __sScCMa(0,uVar21,puVar4,PTR___ss5ErrorWS_100995c48);
  lVar3 = *(long *)(lVar2 + -8);
  lVar20 = *(long *)(lVar3 + 0x40);
  uVar12 = lVar20 + 0xfU & 0xfffffffffffffff0;
  lVar13 = lVar19 - uVar12;
  local_140 = *(code **)(lVar3 + 0x10);
  local_100 = param_1;
  (*local_140)(lVar13,param_1,lVar2);
  uVar16 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar17 = uVar16 + 0x18 & (uVar16 ^ 0xffffffffffffffff);
  puVar4 = &DAT_1009de108;
  local_138 = lVar20;
  _swift_allocObject(&DAT_1009de108,uVar17 + lVar20,uVar16 | 7);
  *(undefined8 *)(puVar4 + 0x10) = uVar21;
  local_148 = *(code **)(lVar3 + 0x20);
  local_108 = lVar3;
  local_f8 = uVar21;
  (*local_148)(puVar4 + uVar17,lVar13,lVar2);
  if (DAT_100aafef8 != -1) {
    _swift_once(&DAT_100aafef8,FUN_10060f124);
  }
  _swift_beginAccess(&DAT_100b3a770,auStack_80,0,0);
  lVar3 = DAT_100b3a778;
  pTVar5 = &TargetProtocolConformanceDescriptor_1008488a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008488a0,lVar14);
  FUN_1006170a4(lVar3,lVar19,FUN_100607038,puVar4,lVar14,pTVar5);
  local_d8 = (long *)lVar3;
  _swift_release(puVar4);
  FUN_1006070b4(lVar19);
  lVar19 = local_e8;
  (*local_110)(local_e8,1,1,local_e0);
  pcVar8 = local_140;
  lVar3 = lVar13 - uVar12;
  local_110 = (code *)lVar13;
  (*local_140)(lVar3,local_100,lVar2);
  lVar14 = lVar3 - uVar12;
  local_120 = lVar14;
  local_118 = lVar3;
  (*pcVar8)(lVar14,lVar3,lVar2);
  puVar4 = &DAT_1009de130;
  _swift_allocObject(&DAT_1009de130,uVar17 + local_138,uVar16 | 7);
  *(undefined8 *)(puVar4 + 0x10) = local_f8;
  local_100 = lVar2;
  (*local_148)(puVar4 + uVar17,lVar3,lVar2);
  lVar2 = DAT_100b3a778;
  lVar20 = 0;
  FUN_100609324();
  _swift_allocObject();
  puVar6 = &DAT_100aaff00;
  FUN_100004bb4(&DAT_100aaff00,&DAT_100848420);
  _swift_allocObject();
  FUN_100004bb4(&DAT_100aaff08,&DAT_100848428);
  _swift_allocObject();
  local_138 = lVar2;
  lVar13 = lVar2;
  FUN_10061047c();
  *(long *)(puVar6 + 0x10) = lVar13;
  puVar7 = &DAT_1009de158;
  _swift_allocObject(&DAT_1009de158,0x20,7);
  lVar3 = local_f0;
  *(code **)(puVar7 + 0x10) = FUN_100605b80;
  *(long *)(puVar7 + 0x18) = lVar13;
  *(undefined **)(lVar20 + 0x10) = puVar6;
  *(code **)(lVar20 + 0x18) = FUN_1000f4ed4;
  *(undefined **)(lVar20 + 0x20) = puVar7;
  FUN_100607210(lVar19,local_f0);
  FUN_100607210(lVar3,local_d0);
  uVar12 = (ulong)*(byte *)(local_130 + 0x50);
  uVar16 = uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff);
  uVar17 = local_128 + uVar16 + 7 & 0xfffffffffffffff8;
  pcVar8 = (code *)&DAT_1009de180;
  _swift_allocObject(&DAT_1009de180,uVar17 + 0x18,uVar12 | 7);
  pcVar8[0x10] = (code)0x0;
  local_128 = lVar2;
  *(long *)(pcVar8 + 0x18) = lVar2;
  FUN_100607324(lVar3,pcVar8 + uVar16);
  plVar1 = local_d8;
  lVar2 = local_138;
  *(code **)(pcVar8 + uVar17) = FUN_10060717c;
  *(undefined **)(pcVar8 + uVar17 + 8) = puVar4;
  *(long *)(pcVar8 + uVar17 + 0x10) = lVar20;
  plVar15 = *(long **)((long)local_d8 + 0x10);
  pcVar18 = *(code **)(*plVar15 + 0x58);
  _swift_retain(lVar13);
  _swift_retain(puVar4);
  local_f0 = lVar20;
  _swift_retain(lVar20);
  (*pcVar18)(&local_90);
  lVar3 = local_f0;
  if ((local_87 & 1) == 0) {
    FUN_1006070b4(local_d0);
    FUN_1006073e8(local_90,local_88,0);
    *(code **)(lVar14 + -0x10) = FUN_100607374;
    *(code **)(lVar14 + -8) = pcVar8;
    (**(code **)(*plVar15 + 0x60))(FUN_1006074f4);
    _swift_release(puVar4);
    _swift_release(plVar1);
    _swift_release(pcVar8);
    lVar2 = local_120;
    lVar3 = local_f0;
  }
  else {
    local_130 = CONCAT44(local_130._4_4_,(uint)local_88);
    if ((local_88 & 1) == 0) {
      (**(code **)(local_f0 + 0x18))();
      uVar12 = local_130 & 0xffffffff;
      lVar2 = local_120;
      lVar13 = local_d0;
    }
    else {
      puVar6 = &DAT_1009de1a8;
      local_138 = lVar2;
      _swift_allocObject(&DAT_1009de1a8,0x30,7);
      lVar13 = local_d0;
      lVar3 = local_f0;
      lVar2 = local_178;
      *(code **)(puVar6 + 0x10) = FUN_10060717c;
      *(undefined **)(puVar6 + 0x18) = puVar4;
      *(code **)(puVar6 + 0x20) = local_90;
      *(long *)(puVar6 + 0x28) = local_f0;
      local_140 = pcVar8;
      if (local_128 == 0) {
        _swift_retain(puVar4);
        _swift_retain(lVar3);
        uVar12 = local_130 & 0xffffffff;
        FUN_100607438(local_90,uVar12,1);
        lVar2 = local_120;
        FUN_100606ca4(local_90,local_120,local_f8);
        (**(code **)(lVar3 + 0x18))();
        _swift_release(puVar6);
        pcVar8 = local_140;
        lVar13 = local_d0;
      }
      else {
        FUN_100607210(local_d0,local_178);
        lVar14 = local_e0;
        lVar3 = local_150;
        lVar20 = lVar2;
        (**(code **)(local_150 + 0x30))(lVar2,1,local_e0);
        lVar19 = local_170;
        local_98 = puVar6;
        if ((int)lVar20 == 1) {
          _swift_retain(puVar4);
          lVar3 = local_f0;
          _swift_retain(local_f0);
          local_148 = local_90;
          uVar12 = local_130 & 0xffffffff;
          FUN_100607438(local_90,uVar12,1);
          FUN_1006070b4(lVar2);
          local_a0 = FUN_10060742c;
          local_c0 = PTR___NSConcreteStackBlock_100995490;
          local_b8 = 0x42000000;
          local_b0 = FUN_1000acdb4;
          puStack_a8 = &DAT_1009de1c0;
          pvVar9 = __Block_copy(&local_c0);
          puVar10 = puVar6;
          _swift_retain(puVar6);
          lVar2 = local_168;
          __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_168);
          local_c8 = PTR___swiftEmptyArrayStorage_100995ea0;
          FUN_100607460();
          puVar7 = &DAT_100aaffd0;
          FUN_100004bb4(&DAT_100aaffd0,&DAT_1008484a0);
          puVar11 = puVar7;
          FUN_1006074a4();
          lVar13 = local_d0;
          lVar19 = local_180;
          __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                    (local_180,&local_c8,puVar7,puVar11,lVar14,puVar10);
          __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                    (0,lVar2,lVar19,pvVar9);
          __Block_release(pvVar9);
          _swift_release(puVar6);
          pcVar8 = local_148;
          (**(code **)(local_150 + 8))(lVar19,lVar14);
          pcVar18 = *(code **)(local_160 + 8);
          lVar19 = local_158;
        }
        else {
          (**(code **)(lVar3 + 0x20))(local_170,lVar2,lVar14);
          local_a0 = FUN_10060742c;
          local_c0 = PTR___NSConcreteStackBlock_100995490;
          local_b8 = 0x42000000;
          local_b0 = FUN_1000acdb4;
          puStack_a8 = &DAT_1009de1e8;
          pvVar9 = __Block_copy(&local_c0);
          _swift_retain(puVar4);
          lVar3 = local_f0;
          _swift_retain(local_f0);
          uVar12 = local_130 & 0xffffffff;
          FUN_100607438(local_90,uVar12,1);
          _swift_retain(puVar6);
          lVar2 = local_168;
          __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_168);
          __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                    (0,lVar2,lVar19,pvVar9);
          __Block_release(pvVar9);
          _swift_release(puVar6);
          (**(code **)(local_160 + 8))(lVar2,local_158);
          pcVar18 = *(code **)(local_150 + 8);
          lVar2 = local_170;
          lVar19 = local_e0;
          pcVar8 = local_90;
        }
        (*pcVar18)(lVar2,lVar19);
        _swift_release(local_98);
        lVar2 = local_120;
        lVar19 = local_e8;
        local_90 = pcVar8;
        pcVar8 = local_140;
      }
    }
    plVar1 = local_d8;
    FUN_1006070b4(lVar13);
    FUN_1006073e8(local_90,uVar12,1);
    _swift_release(puVar4);
    _swift_release(plVar1);
    _swift_release(pcVar8);
  }
  (**(code **)(local_108 + 8))(lVar2,local_100);
  _swift_release(lVar3);
  FUN_1006070b4(lVar19);
  return;
}

