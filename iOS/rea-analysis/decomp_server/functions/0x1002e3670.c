// rea decompile_all
// name: FUN_1002e3670
// address: 0x1002e3670
// body: available
// range: 0x1002e3670-0x1002e3c53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

long FUN_1002e3670(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  ID IVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long unaff_x20;
  code *pcVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long local_190 [7];
  undefined4 local_14c;
  undefined8 auStack_148 [18];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 local_a0;
  undefined **ppuStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  local_14c = param_3;
  FUN_1002c76a8();
  lVar2 = -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = (undefined1 *)((long)local_190 + lVar2);
  lVar4 = 0;
  local_190[6] = lVar3;
  __s10Foundation4UUIDVMa();
  lVar14 = *(long *)(lVar4 + -8);
  uVar13 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar19 = (long)puVar16 - uVar13;
  lVar18 = lVar19 - uVar13;
  local_190[1] = lVar19;
  local_190[4] = lVar14;
  FUN_1000b142c(param_1,auStack_90);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar21 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar5 = 0;
  FUN_100338154();
  ppuStack_98 = &PTR_PTR_1009b2868;
  local_b8 = uVar21;
  local_a0 = uVar5;
  FUN_10007f314(param_2,auStack_148 + 0xd,&DAT_100a83d18,0x1008188a0);
  local_190[2] = uVar20;
  local_190[3] = uVar17;
  _swift_retain(uVar21);
  local_190[5] = lVar18;
  __s10Foundation4UUIDVACycfC(lVar18);
  lVar6 = 0;
  FUN_10028a504();
  _swift_allocObject();
  lVar3 = _TtC9Alamofire11DataRequest::dataMutableState;
  puVar7 = &DAT_100a821d8;
  FUN_100004bb4(&DAT_100a821d8,&DAT_100816000);
  _swift_allocObject();
  lVar8 = 0;
  FUN_1002c6dd8();
  lVar9 = lVar8;
  _swift_allocObject();
  puVar10 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar9 + 0x10) = puVar10;
  *puVar10 = 0;
  *(long *)(puVar7 + 0x10) = lVar9;
  *(undefined8 *)(puVar7 + 0x20) = 0xf000000000000000;
  *(undefined8 *)(puVar7 + 0x18) = 0;
  *(undefined8 *)(puVar7 + 0x30) = 0;
  *(undefined8 *)(puVar7 + 0x38) = 0;
  *(undefined8 *)(puVar7 + 0x28) = 0;
  *(undefined **)(lVar6 + lVar3) = puVar7;
  FUN_1000b142c(auStack_90,lVar6 + _TtC9Alamofire11DataRequest::convertible);
  pcVar15 = *(code **)(lVar14 + 0x10);
  local_190[0] = lVar4;
  (*pcVar15)(lVar19,lVar18,lVar4);
  FUN_10007f314(&local_b8,auStack_148 + 8,&DAT_100a82c40,&DAT_100817200);
  FUN_10007f314(auStack_148 + 0xd,auStack_148 + 3,&DAT_100a83d18,0x1008188a0);
  lVar3 = lVar6 + _TtC9Alamofire7Request::delegate;
  *(undefined8 *)(lVar3 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar3,0);
  lVar3 = _TtC9Alamofire7Request::uploadProgress;
  IVar11 = NSProgress::progressWithTotalUnitCount_
                     ((ID)&_OBJC_CLASS___NSProgress,"progressWithTotalUnitCount:",0);
  *(ID *)(lVar6 + lVar3) = IVar11;
  lVar3 = _TtC9Alamofire7Request::downloadProgress;
  IVar11 = NSProgress::progressWithTotalUnitCount_
                     ((ID)&_OBJC_CLASS___NSProgress,"progressWithTotalUnitCount:",0);
  *(ID *)(lVar6 + lVar3) = IVar11;
  lVar3 = _TtC9Alamofire7Request::validators;
  lVar18 = 0;
  FUN_1002763e4(0,&DAT_100a821f0,FUN_1002763c8,FUN_1002c70ac);
  _swift_allocObject();
  lVar14 = lVar8;
  _swift_allocObject(lVar8,0x18,7);
  puVar10 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  lVar9 = local_190[1];
  *(undefined4 **)(lVar14 + 0x10) = puVar10;
  *puVar10 = 0;
  puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(long *)(lVar18 + 0x10) = lVar14;
  *(undefined **)(lVar18 + 0x18) = puVar7;
  *(long *)(lVar6 + lVar3) = lVar18;
  (*pcVar15)(lVar6 + _TtC9Alamofire7Request::id,local_190[1],lVar4);
  *(long *)(lVar6 + _TtC9Alamofire7Request::underlyingQueue) = local_190[3];
  *(long *)(lVar6 + _TtC9Alamofire7Request::serializationQueue) = local_190[2];
  *(undefined8 *)(&stack0xfffffffffffffeb0 + lVar2) = 0;
  *(undefined8 *)((long)auStack_148 + lVar2 + -0x10) = 0;
  *(undefined8 *)((long)auStack_148 + lVar2 + 8) = 0;
  *(undefined8 *)((long)auStack_148 + lVar2) = 0;
  *(undefined8 *)((long)auStack_148 + lVar2 + 0x18) = 0;
  *(undefined8 *)((long)auStack_148 + lVar2 + 0x10) = 0;
  *(undefined8 *)((long)auStack_148 + lVar2 + 0x28) = 0;
  *(undefined8 *)((long)auStack_148 + lVar2 + 0x20) = 0;
  *(undefined8 *)((long)auStack_148 + lVar2 + 0x38) = 0;
  *(undefined8 *)((long)auStack_148 + lVar2 + 0x30) = 0;
  FUN_10007f314(auStack_148 + 8,(long)&local_a0 + lVar2,&DAT_100a82c40,&DAT_100817200);
  FUN_10007f314(auStack_148 + 3,auStack_78 + lVar2,&DAT_100a83d18,0x1008188a0);
  lVar3 = local_190[6];
  iVar1 = *(int *)(local_190[6] + 0x5c);
  lVar14 = 0;
  FUN_100277ad0();
  (**(code **)(*(long *)(lVar14 + -8) + 0x38))(puVar16 + iVar1,1,1,lVar14);
  *puVar16 = 0;
  *(undefined8 *)((long)local_190 + lVar2 + 0x10) = 0;
  *(undefined8 *)((long)local_190 + lVar2 + 8) = 0;
  *(undefined8 *)((long)local_190 + lVar2 + 0x20) = 0;
  *(undefined8 *)((long)local_190 + lVar2 + 0x18) = 0;
  *(undefined8 *)((long)local_190 + lVar2 + 0x30) = 0;
  *(undefined8 *)((long)local_190 + lVar2 + 0x28) = 0;
  *(undefined8 *)((long)auStack_148 + lVar2 + 0x48) = 0;
  *(undefined8 *)((long)auStack_148 + lVar2 + 0x40) = 0;
  *(undefined8 *)((long)auStack_148 + lVar2 + 0x58) = 0;
  *(undefined8 *)((long)auStack_148 + lVar2 + 0x50) = 0;
  *(undefined8 *)((long)auStack_148 + lVar2 + 0x68) = 0;
  *(undefined8 *)((long)auStack_148 + lVar2 + 0x60) = 0;
  *(undefined8 *)((long)auStack_148 + lVar2 + 0x78) = 0;
  *(undefined8 *)((long)auStack_148 + lVar2 + 0x70) = 0;
  *(undefined8 *)((long)auStack_148 + lVar2 + 0x80) = 0;
  *(undefined **)((long)auStack_148 + lVar2 + 0x88) = puVar7;
  *(undefined1 *)((long)&local_b8 + lVar2) = 0;
  *(undefined **)((long)&uStack_b0 + lVar2) = puVar7;
  auStack_a8[lVar2] = 0;
  *(undefined8 *)(&stack0xffffffffffffffb0 + lVar2) = 0;
  *(undefined **)(&stack0xffffffffffffffb8 + lVar2) = puVar7;
  *(undefined **)(&stack0xffffffffffffffc0 + lVar2) = puVar7;
  *(undefined **)(&stack0xffffffffffffffc8 + lVar2) = puVar7;
  *(undefined8 *)(&stack0xffffffffffffffd0 + lVar2) = 0;
  puVar16[*(int *)(lVar3 + 0x60)] = 0;
  *(undefined **)(puVar16 + *(int *)(lVar3 + 100)) = puVar7;
  plVar12 = (long *)&DAT_100a84378;
  FUN_100004bb4(&DAT_100a84378,&DAT_100819890);
  _swift_allocObject();
  _swift_allocObject(lVar8,0x18,7);
  puVar10 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar8 + 0x10) = puVar10;
  *puVar10 = 0;
  FUN_100040bb4(auStack_148 + 3,&DAT_100a83d18,0x1008188a0);
  FUN_100040bb4(auStack_148 + 8,&DAT_100a82c40,&DAT_100817200);
  lVar3 = local_190[0];
  pcVar15 = *(code **)(local_190[4] + 8);
  (*pcVar15)(lVar9,local_190[0]);
  (*pcVar15)(local_190[5],lVar3);
  FUN_100040bb4(auStack_148 + 0xd,&DAT_100a83d18,0x1008188a0);
  FUN_10003f094(auStack_90);
  FUN_100040bb4(&local_b8,&DAT_100a82c40,&DAT_100817200);
  plVar12[2] = lVar8;
  FUN_1000823d8(puVar16,(undefined *)((long)plVar12 + *(long *)(*plVar12 + 0x60)),FUN_1002c76a8);
  *(long **)(lVar6 + _TtC9Alamofire7Request::mutableState) = plVar12;
  *(char *)(lVar6 + _TtC9Alamofire7Request::shouldAutomaticallyResume) = (char)local_14c;
  lVar3 = lVar6 + _TtC9Alamofire7Request::delegate;
  _swift_beginAccess(lVar3,auStack_148,1,0);
  *(undefined ***)(lVar3 + 8) = &PTR_PTR_1009ae808;
  _swift_unknownObjectWeakAssign(lVar3,unaff_x20);
  if (*(char *)(unaff_x20 + 0x29) == '\x01') {
    FUN_1002e6b44(lVar6,0);
  }
  return lVar6;
}

