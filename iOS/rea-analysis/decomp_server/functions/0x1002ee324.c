// rea decompile_all
// name: FUN_1002ee324
// address: 0x1002ee324
// body: available
// range: 0x1002ee324-0x1002eea4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Type propagation algorithm not settling */

long FUN_1002ee324(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  ID IVar9;
  long *plVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long local_250 [9];
  undefined4 local_204;
  long local_200 [17];
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined8 local_168;
  undefined **ppuStack_160;
  undefined1 auStack_158 [32];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [32];
  undefined8 uStack_110;
  undefined8 auStack_108 [5];
  undefined8 local_e0 [3];
  undefined8 local_c8;
  undefined **ppuStack_c0;
  undefined1 auStack_b8 [24];
  long local_a0;
  long lStack_98;
  undefined8 local_90 [3];
  undefined8 local_78;
  undefined **ppuStack_70;
  
  lVar3 = 0;
  local_204 = param_3;
  FUN_1002c76a8();
  lVar2 = -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = (undefined1 *)((long)local_250 + lVar2);
  lVar4 = 0;
  local_250[7] = lVar3;
  __s10Foundation4UUIDVMa();
  lVar15 = *(long *)(lVar4 + -8);
  uVar11 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_200[2] = (long)puVar14 - uVar11;
  lVar16 = local_200[2] - uVar11;
  lVar13 = lVar16 - uVar11;
  uVar5 = 0;
  local_250[5] = lVar15;
  local_200[0] = lVar4;
  FUN_10033ba9c();
  ppuStack_70 = &PTR_PTR_1009b2bb8;
  local_250[1] = param_1;
  local_200[1] = uVar5;
  local_90[0] = param_1;
  local_78 = uVar5;
  FUN_1000b142c(local_90,auStack_b8);
  local_250[3] = *(undefined8 *)(param_5 + 0x20);
  local_250[4] = *(undefined8 *)(param_5 + 0x38);
  uVar17 = *(undefined8 *)(param_5 + 0xc0);
  uVar5 = 0;
  local_250[8] = param_5;
  FUN_100338154();
  ppuStack_c0 = &PTR_PTR_1009b2868;
  local_e0[0] = uVar17;
  local_c8 = uVar5;
  FUN_10007f314(param_2,auStack_108,&DAT_100a83d18,0x1008188a0);
  _swift_retain(param_1);
  _swift_retain(uVar17);
  local_250[6] = lVar13;
  __s10Foundation4UUIDVACycfC(lVar13);
  lVar6 = 0;
  FUN_1002f9a10();
  _swift_allocObject();
  lVar3 = _TtC9Alamofire13UploadRequest::uploadable;
  lVar4 = 0;
  FUN_1002f9800();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar6 + lVar3,1,1,lVar4);
  FUN_10003f030(auStack_b8,local_a0);
  lVar3 = lVar6 + _TtC9Alamofire13UploadRequest::upload;
  *(long *)(lVar3 + 0x18) = local_a0;
  *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lStack_98 + 0x10);
  FUN_1000efc08();
  (**(code **)(*(long *)(local_a0 + -8) + 0x10))();
  lVar4 = local_200[0];
  *(undefined8 *)(lVar6 + _TtC9Alamofire13UploadRequest::fileManager) = param_4;
  pcVar12 = *(code **)(lVar15 + 0x10);
  local_250[2] = lVar16;
  (*pcVar12)(lVar16,lVar13,local_200[0]);
  FUN_10007f314(local_e0,auStack_130,&DAT_100a82c40,&DAT_100817200);
  FUN_10007f314(auStack_108,auStack_158,&DAT_100a83d18,0x1008188a0);
  lVar3 = local_250[1];
  local_168 = local_200[1];
  ppuStack_160 = &PTR_PTR_1009b2b98;
  local_200[0x10] = local_250[1];
  local_250[0] = _TtC9Alamofire11DataRequest::dataMutableState;
  puVar7 = &DAT_100a821d8;
  FUN_100004bb4(&DAT_100a821d8,&DAT_100816000);
  _swift_allocObject();
  lVar13 = 0;
  FUN_1002c6dd8();
  local_200[1] = lVar13;
  _swift_allocObject();
  _swift_retain(lVar3);
  puVar8 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar13 + 0x10) = puVar8;
  *puVar8 = 0;
  *(long *)(puVar7 + 0x10) = lVar13;
  *(undefined8 *)(puVar7 + 0x20) = 0xf000000000000000;
  *(undefined8 *)(puVar7 + 0x18) = 0;
  *(undefined8 *)(puVar7 + 0x30) = 0;
  *(undefined8 *)(puVar7 + 0x38) = 0;
  *(undefined8 *)(puVar7 + 0x28) = 0;
  *(undefined **)(lVar6 + local_250[0]) = puVar7;
  FUN_1000b142c(local_200 + 0x10,lVar6 + _TtC9Alamofire11DataRequest::convertible);
  lVar13 = local_200[2];
  (*pcVar12)(local_200[2],lVar16,lVar4);
  FUN_10007f314(auStack_130,local_200 + 0xb,&DAT_100a82c40,&DAT_100817200);
  FUN_10007f314(auStack_158,local_200 + 6,&DAT_100a83d18,0x1008188a0);
  lVar3 = lVar6 + _TtC9Alamofire7Request::delegate;
  *(undefined8 *)(lVar3 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar3,0);
  lVar3 = _TtC9Alamofire7Request::uploadProgress;
  IVar9 = NSProgress::progressWithTotalUnitCount_
                    ((ID)&_OBJC_CLASS___NSProgress,"progressWithTotalUnitCount:",0);
  *(ID *)(lVar6 + lVar3) = IVar9;
  lVar3 = _TtC9Alamofire7Request::downloadProgress;
  IVar9 = NSProgress::progressWithTotalUnitCount_
                    ((ID)&_OBJC_CLASS___NSProgress,"progressWithTotalUnitCount:",0);
  *(ID *)(lVar6 + lVar3) = IVar9;
  lVar3 = _TtC9Alamofire7Request::validators;
  lVar16 = 0;
  FUN_1002763e4(0,&DAT_100a821f0,FUN_1002763c8,FUN_1002c70ac);
  _swift_allocObject();
  lVar15 = local_200[1];
  _swift_allocObject(local_200[1],0x18,7);
  puVar8 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar15 + 0x10) = puVar8;
  *puVar8 = 0;
  puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(long *)(lVar16 + 0x10) = lVar15;
  *(undefined **)(lVar16 + 0x18) = puVar7;
  *(long *)(lVar6 + lVar3) = lVar16;
  (*pcVar12)(lVar6 + _TtC9Alamofire7Request::id,lVar13,lVar4);
  *(long *)(lVar6 + _TtC9Alamofire7Request::underlyingQueue) = local_250[3];
  *(long *)(lVar6 + _TtC9Alamofire7Request::serializationQueue) = local_250[4];
  *(undefined8 *)((long)local_250 + lVar2 + 0x40) = 0;
  *(undefined8 *)((long)local_250 + lVar2 + 0x38) = 0;
  *(undefined8 *)((long)local_200 + lVar2) = 0;
  *(undefined8 *)(&stack0xfffffffffffffdf8 + lVar2) = 0;
  *(undefined8 *)((long)local_200 + lVar2 + 0x10) = 0;
  *(undefined8 *)((long)local_200 + lVar2 + 8) = 0;
  *(undefined8 *)((long)local_200 + lVar2 + 0x20) = 0;
  *(undefined8 *)((long)local_200 + lVar2 + 0x18) = 0;
  *(undefined8 *)((long)local_200 + lVar2 + 0x30) = 0;
  *(undefined8 *)((long)local_200 + lVar2 + 0x28) = 0;
  FUN_10007f314(local_200 + 0xb,auStack_158 + lVar2 + -8,&DAT_100a82c40,&DAT_100817200);
  FUN_10007f314(local_200 + 6,auStack_138 + lVar2,&DAT_100a83d18,0x1008188a0);
  lVar3 = local_250[7];
  iVar1 = *(int *)(local_250[7] + 0x5c);
  lVar4 = 0;
  FUN_100277ad0();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar14 + iVar1,1,1,lVar4);
  *puVar14 = 0;
  *(undefined8 *)((long)local_250 + lVar2 + 0x10) = 0;
  *(undefined8 *)((long)local_250 + lVar2 + 8) = 0;
  *(undefined8 *)((long)local_250 + lVar2 + 0x20) = 0;
  *(undefined8 *)((long)local_250 + lVar2 + 0x18) = 0;
  *(undefined8 *)((long)local_250 + lVar2 + 0x30) = 0;
  *(undefined8 *)((long)local_250 + lVar2 + 0x28) = 0;
  *(undefined8 *)((long)local_200 + lVar2 + 0x40) = 0;
  *(undefined8 *)((long)local_200 + lVar2 + 0x38) = 0;
  *(undefined8 *)((long)local_200 + lVar2 + 0x50) = 0;
  *(undefined8 *)((long)local_200 + lVar2 + 0x48) = 0;
  *(undefined8 *)((long)local_200 + lVar2 + 0x60) = 0;
  *(undefined8 *)((long)local_200 + lVar2 + 0x58) = 0;
  *(undefined8 *)((long)local_200 + lVar2 + 0x70) = 0;
  *(undefined8 *)((long)local_200 + lVar2 + 0x68) = 0;
  *(undefined8 *)((long)local_200 + lVar2 + 0x78) = 0;
  *(undefined **)(auStack_178 + lVar2 + -8) = puVar7;
  auStack_178[lVar2] = 0;
  *(undefined **)((long)&uStack_170 + lVar2) = puVar7;
  *(undefined1 *)((long)&local_168 + lVar2) = 0;
  *(undefined8 *)((long)&uStack_110 + lVar2) = 0;
  *(undefined **)((long)auStack_108 + lVar2) = puVar7;
  *(undefined **)((long)auStack_108 + lVar2 + 8U) = puVar7;
  *(undefined **)((long)auStack_108 + lVar2 + 0x10U) = puVar7;
  *(undefined8 *)((long)auStack_108 + lVar2 + 0x18U) = 0;
  puVar14[*(int *)(lVar3 + 0x60)] = 0;
  *(undefined **)(puVar14 + *(int *)(lVar3 + 100)) = puVar7;
  plVar10 = (long *)&DAT_100a84378;
  FUN_100004bb4(&DAT_100a84378,&DAT_100819890);
  _swift_allocObject();
  lVar3 = local_200[1];
  _swift_allocObject(local_200[1],0x18,7);
  puVar8 = (undefined4 *)0x4;
  local_200[1] = lVar3;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar3 + 0x10) = puVar8;
  *puVar8 = 0;
  FUN_100040bb4(local_200 + 6,&DAT_100a83d18,0x1008188a0);
  FUN_100040bb4(local_200 + 0xb,&DAT_100a82c40,&DAT_100817200);
  lVar3 = local_200[0];
  pcVar12 = *(code **)(local_250[5] + 8);
  (*pcVar12)(local_200[2],local_200[0]);
  FUN_100040bb4(auStack_158,&DAT_100a83d18,0x1008188a0);
  FUN_100040bb4(auStack_130,&DAT_100a82c40,&DAT_100817200);
  (*pcVar12)(local_250[2],lVar3);
  (*pcVar12)(local_250[6],lVar3);
  FUN_100040bb4(auStack_108,&DAT_100a83d18,0x1008188a0);
  FUN_10003f094(local_200 + 0x10);
  plVar10[2] = local_200[1];
  FUN_1000823d8(puVar14,(undefined *)((long)plVar10 + *(long *)(*plVar10 + 0x60)),FUN_1002c76a8);
  *(long **)(lVar6 + _TtC9Alamofire7Request::mutableState) = plVar10;
  *(char *)(lVar6 + _TtC9Alamofire7Request::shouldAutomaticallyResume) = (char)local_204;
  lVar3 = lVar6 + _TtC9Alamofire7Request::delegate;
  _swift_beginAccess(lVar3,local_200 + 3,1,0);
  lVar2 = local_250[8];
  *(undefined ***)(lVar3 + 8) = &PTR_PTR_1009ae808;
  _swift_unknownObjectWeakAssign(lVar3,local_250[8]);
  FUN_100040bb4(local_e0,&DAT_100a82c40,&DAT_100817200);
  FUN_10003f094(auStack_b8);
  if (*(char *)(lVar2 + 0x29) == '\x01') {
    FUN_1002e6b44(lVar6,0);
  }
  FUN_10003f094(local_90);
  return lVar6;
}

