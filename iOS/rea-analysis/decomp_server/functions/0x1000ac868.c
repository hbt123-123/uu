// rea decompile_all
// name: FUN_1000ac868
// address: 0x1000ac868
// body: available
// range: 0x1000ac868-0x1000acd03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000ac868(undefined8 *param_1,ID param_2,char *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ID self;
  ID IVar3;
  undefined8 uVar4;
  undefined *self_00;
  undefined *puVar5;
  long lVar6;
  char *pcVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long extraout_x12;
  long extraout_x13;
  undefined8 extraout_x14;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long alStack_330 [6];
  undefined8 *local_300;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 *puStack_1e8;
  undefined8 *local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  ID IStack_1c8;
  char *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined3 local_168;
  undefined5 uStack_165;
  undefined3 uStack_160;
  undefined4 uStack_15d;
  undefined4 uStack_159;
  ID local_150;
  char *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 *puStack_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 local_100;
  ID local_f8;
  char *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined4 uStack_cf;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined7 uStack_90;
  undefined4 uStack_89;
  undefined4 local_7f;
  undefined3 uStack_7b;
  undefined1 local_78;
  
  puVar2 = (undefined8 *)0x0;
  __s10Foundation3URLVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(puVar2[-1] + 0x40));
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar12 = (undefined8 *)
            ((long)alStack_330 + (-extraout_x12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)) + 0x20)
  ;
  local_78 = 1;
  if (param_3 == (char *)0x0) {
    puVar2 = (undefined8 *)0x0;
    param_2 = 0;
    puVar11 = (undefined8 *)0xe000000000000000;
    param_3 = (char *)0xe000000000000000;
    goto LAB_1000acbf4;
  }
  alStack_330[4] = extraout_x14;
  alStack_330[5] = extraout_x13;
  local_300 = puVar2;
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar3 = param_2;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  pcVar7 = "displayNameAtPath:";
  IVar3 = NSFileManager::displayNameAtPath_(self,"displayNameAtPath:",IVar3);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar4 = 0;
  local_220 = 0x7070612e;
  uStack_218 = 0xe400000000000000;
  local_2f0 = 0;
  uStack_2e8 = 0xe000000000000000;
  local_150 = IVar3;
  pcStack_148 = pcVar7;
  FUN_10009ff0c();
  puVar12[-2] = uVar4;
  puVar12[-1] = uVar4;
  puVar12[-4] = PTR___sSSN_1009957f8;
  puVar12[-3] = uVar4;
  puVar2 = &local_220;
  puVar11 = &local_2f0;
  __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
            (puVar2,puVar11,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
  _swift_bridgeObjectRelease(pcVar7);
  uVar8 = (ulong)puVar11 & 0x2000000000000000;
  uVar9 = (ulong)puVar11 >> 0x38 & 0xf;
  uVar10 = (ulong)puVar2 & 0xffffffffffff;
  uVar1 = uVar10;
  if (uVar8 != 0) {
    uVar1 = uVar9;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(puVar11);
    __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(puVar12,param_2,param_3);
    self_00 = &_OBJC_CLASS___NSBundle;
    _objc_allocWithZone();
    puVar5 = self_00;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    IVar3 = _objc_msgSend((ID)self_00,"initWithURL:",puVar5);
    puVar2 = puVar12;
    puVar11 = local_300;
    (**(code **)(alStack_330[5] + 8))();
    if ((IVar3 != 0) && (FUN_100407880(), puVar11 != (undefined8 *)0x0)) {
      uVar8 = (ulong)puVar11 & 0x2000000000000000;
      uVar9 = (ulong)puVar11 >> 0x38 & 0xf;
      uVar10 = (ulong)puVar2 & 0xffffffffffff;
      goto LAB_1000aca04;
    }
LAB_1000acac4:
    IVar3 = param_2;
    pcVar7 = param_3;
    __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(alStack_330[4]);
    __s10Foundation3URLV17lastPathComponentSSvg();
    (**(code **)(alStack_330[5] + 8))(alStack_330[4],local_300);
    local_220 = 0x7070612e;
    uStack_218 = 0xe400000000000000;
    local_2f0 = 0;
    uStack_2e8 = 0xe000000000000000;
    local_150 = IVar3;
    pcStack_148 = pcVar7;
    puVar12[-2] = uVar4;
    puVar12[-1] = uVar4;
    puVar2 = &local_220;
    puVar11 = &local_2f0;
    puVar12[-3] = uVar4;
    puVar12[-4] = PTR___sSSN_1009957f8;
    __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
              (puVar2,puVar11,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
    _swift_bridgeObjectRelease(pcVar7);
  }
  else {
LAB_1000aca04:
    if (uVar8 != 0) {
      uVar10 = uVar9;
    }
    if (uVar10 == 0) {
      _swift_bridgeObjectRelease(puVar11);
      goto LAB_1000acac4;
    }
  }
  _swift_bridgeObjectRetain(param_3);
  IVar3 = param_2;
  __sSS5countSivg(param_2,param_3);
  _swift_bridgeObjectRelease(param_3);
  if (2000 < (long)IVar3) {
    IVar3 = param_2;
    __sSS5countSivg(param_2,param_3);
    lVar6 = 0;
    FUN_1000ac540(0,IVar3,2000,param_2,param_3,2000);
    _swift_bridgeObjectRelease(param_3);
    if (*(long *)(lVar6 + 0x10) == 0) {
      param_2 = 0;
      param_3 = (char *)0xe000000000000000;
    }
    else {
      param_2 = *(ID *)(lVar6 + 0x20);
      param_3 = *(char **)(lVar6 + 0x28);
      _swift_bridgeObjectRetain(param_3);
    }
    _swift_bridgeObjectRelease(lVar6);
  }
LAB_1000acbf4:
  uStack_208 = 0;
  local_210 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  uStack_218 = 0;
  local_220 = 0;
  local_1f0 = 2;
  uStack_1d8 = 0;
  local_1d0 = 0xe000000000000000;
  uStack_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = CONCAT31((int3)local_7f,local_78);
  uStack_19c = CONCAT31(uStack_7b,(char)((uint)local_7f >> 0x18));
  uStack_190 = 0;
  uStack_198 = 0;
  uStack_180 = 0;
  local_188 = 0;
  uStack_170 = 0;
  local_178 = 0;
  uStack_160 = 0;
  uStack_15d = 0;
  local_168 = 0;
  uStack_165 = 0;
  uStack_159 = 0;
  pcStack_148 = (char *)0x0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  local_120 = 2;
  local_108 = 0;
  local_100 = 0xe000000000000000;
  local_e8 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_d0 = local_78;
  uStack_cf = local_7f;
  uStack_c0 = 0;
  local_c8 = 0;
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_89 = 0;
  puStack_1e8 = puVar2;
  local_1e0 = puVar11;
  IStack_1c8 = param_2;
  local_1c0 = param_3;
  puStack_118 = puVar2;
  local_110 = puVar11;
  local_f8 = param_2;
  local_f0 = param_3;
  FUN_1000acd04(&local_220,&local_2f0);
  FUN_1000acd38(&local_150);
  param_1[0x15] = local_178;
  param_1[0x14] = uStack_180;
  param_1[0x17] = CONCAT53(uStack_165,local_168);
  param_1[0x16] = uStack_170;
  *(ulong *)((long)param_1 + 0xc3) = CONCAT44(uStack_159,uStack_15d);
  *(ulong *)((long)param_1 + 0xbb) = CONCAT35(uStack_160,uStack_165);
  param_1[0xd] = uStack_1b8;
  param_1[0xc] = local_1c0;
  param_1[0xf] = uStack_1a8;
  param_1[0xe] = local_1b0;
  param_1[0x11] = uStack_198;
  param_1[0x10] = CONCAT44(uStack_19c,local_1a0);
  param_1[0x13] = local_188;
  param_1[0x12] = uStack_190;
  param_1[5] = uStack_1f8;
  param_1[4] = local_200;
  param_1[7] = puStack_1e8;
  param_1[6] = local_1f0;
  param_1[9] = uStack_1d8;
  param_1[8] = local_1e0;
  param_1[0xb] = IStack_1c8;
  param_1[10] = local_1d0;
  param_1[1] = uStack_218;
  *param_1 = local_220;
  param_1[3] = uStack_208;
  param_1[2] = local_210;
  return;
}

