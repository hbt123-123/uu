// rea decompile_all
// name: FUN_1002e3f48
// address: 0x1002e3f48
// body: available
// range: 0x1002e3f48-0x1002e4547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

long FUN_1002e3f48(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined4 *puVar11;
  ID IVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long unaff_x20;
  undefined1 *puVar16;
  undefined8 uVar17;
  long lVar18;
  code *pcVar19;
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
  
  lVar5 = 0;
  local_14c = param_4;
  FUN_1002c76a8();
  lVar2 = -(*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = (undefined1 *)((long)local_190 + lVar2);
  lVar6 = 0;
  local_190[6] = lVar5;
  __s10Foundation4UUIDVMa();
  lVar15 = *(long *)(lVar6 + -8);
  uVar14 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_190[0] = (long)puVar16 - uVar14;
  lVar18 = local_190[0] - uVar14;
  local_190[1] = lVar6;
  local_190[4] = lVar15;
  FUN_1000b142c(param_1,auStack_90);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar20 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar7 = 0;
  FUN_100338154();
  ppuStack_98 = &PTR_PTR_1009b2868;
  local_b8 = uVar20;
  local_a0 = uVar7;
  FUN_10007f314(param_3,auStack_148 + 0xd,&DAT_100a83d18,0x1008188a0);
  local_190[2] = uVar21;
  local_190[3] = uVar17;
  _swift_retain(uVar20);
  local_190[5] = lVar18;
  __s10Foundation4UUIDVACycfC(lVar18);
  lVar8 = 0;
  FUN_100298108();
  _swift_allocObject();
  lVar5 = _TtC9Alamofire17DataStreamRequest::streamMutableState;
  puVar9 = &DAT_100a821e0;
  FUN_100004bb4(&DAT_100a821e0,&DAT_100816008);
  _swift_allocObject();
  lVar10 = 0;
  FUN_1002c6dd8();
  lVar6 = lVar10;
  _swift_allocObject();
  puVar11 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar6 + 0x10) = puVar11;
  *puVar11 = 0;
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(long *)(puVar9 + 0x10) = lVar6;
  *(undefined8 *)(puVar9 + 0x18) = 0;
  *(undefined **)(puVar9 + 0x20) = puVar3;
  *(undefined8 *)(puVar9 + 0x28) = 0;
  *(undefined **)(puVar9 + 0x30) = puVar3;
  *(undefined8 *)(puVar9 + 0x38) = 0;
  *(undefined8 *)(puVar9 + 0x40) = 0;
  *(undefined8 *)(puVar9 + 0x48) = 0;
  *(undefined **)(lVar8 + lVar5) = puVar9;
  FUN_1000b142c(auStack_90,lVar8 + _TtC9Alamofire17DataStreamRequest::convertible);
  lVar4 = local_190[1];
  lVar6 = local_190[0];
  *(undefined1 *)(lVar8 + _TtC9Alamofire17DataStreamRequest::automaticallyCancelOnStreamError) =
       param_2;
  pcVar19 = *(code **)(lVar15 + 0x10);
  (*pcVar19)(local_190[0],lVar18,local_190[1]);
  FUN_10007f314(&local_b8,auStack_148 + 8,&DAT_100a82c40,&DAT_100817200);
  FUN_10007f314(auStack_148 + 0xd,auStack_148 + 3,&DAT_100a83d18,0x1008188a0);
  lVar5 = lVar8 + _TtC9Alamofire7Request::delegate;
  *(undefined8 *)(lVar5 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar5,0);
  lVar5 = _TtC9Alamofire7Request::uploadProgress;
  IVar12 = NSProgress::progressWithTotalUnitCount_
                     ((ID)&_OBJC_CLASS___NSProgress,"progressWithTotalUnitCount:",0);
  *(ID *)(lVar8 + lVar5) = IVar12;
  lVar5 = _TtC9Alamofire7Request::downloadProgress;
  IVar12 = NSProgress::progressWithTotalUnitCount_
                     ((ID)&_OBJC_CLASS___NSProgress,"progressWithTotalUnitCount:",0);
  *(ID *)(lVar8 + lVar5) = IVar12;
  lVar5 = _TtC9Alamofire7Request::validators;
  lVar18 = 0;
  FUN_1002763e4(0,&DAT_100a821f0,FUN_1002763c8,FUN_1002c70ac);
  _swift_allocObject();
  lVar15 = lVar10;
  _swift_allocObject(lVar10,0x18,7);
  puVar11 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar15 + 0x10) = puVar11;
  *puVar11 = 0;
  *(long *)(lVar18 + 0x10) = lVar15;
  *(undefined **)(lVar18 + 0x18) = puVar3;
  *(long *)(lVar8 + lVar5) = lVar18;
  (*pcVar19)(lVar8 + _TtC9Alamofire7Request::id,lVar6,lVar4);
  *(long *)(lVar8 + _TtC9Alamofire7Request::underlyingQueue) = local_190[3];
  *(long *)(lVar8 + _TtC9Alamofire7Request::serializationQueue) = local_190[2];
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
  lVar5 = local_190[6];
  iVar1 = *(int *)(local_190[6] + 0x5c);
  lVar15 = 0;
  FUN_100277ad0();
  (**(code **)(*(long *)(lVar15 + -8) + 0x38))(puVar16 + iVar1,1,1,lVar15);
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
  *(undefined **)((long)auStack_148 + lVar2 + 0x88) = puVar3;
  *(undefined1 *)((long)&local_b8 + lVar2) = 0;
  *(undefined **)((long)&uStack_b0 + lVar2) = puVar3;
  auStack_a8[lVar2] = 0;
  *(undefined8 *)(&stack0xffffffffffffffb0 + lVar2) = 0;
  *(undefined **)(&stack0xffffffffffffffb8 + lVar2) = puVar3;
  *(undefined **)(&stack0xffffffffffffffc0 + lVar2) = puVar3;
  *(undefined **)(&stack0xffffffffffffffc8 + lVar2) = puVar3;
  *(undefined8 *)(&stack0xffffffffffffffd0 + lVar2) = 0;
  puVar16[*(int *)(lVar5 + 0x60)] = 0;
  *(undefined **)(puVar16 + *(int *)(lVar5 + 100)) = puVar3;
  plVar13 = (long *)&DAT_100a84378;
  FUN_100004bb4(&DAT_100a84378,&DAT_100819890);
  _swift_allocObject();
  _swift_allocObject(lVar10,0x18,7);
  puVar11 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar10 + 0x10) = puVar11;
  *puVar11 = 0;
  FUN_100040bb4(auStack_148 + 3,&DAT_100a83d18,0x1008188a0);
  FUN_100040bb4(auStack_148 + 8,&DAT_100a82c40,&DAT_100817200);
  pcVar19 = *(code **)(local_190[4] + 8);
  (*pcVar19)(lVar6,lVar4);
  (*pcVar19)(local_190[5],lVar4);
  FUN_100040bb4(auStack_148 + 0xd,&DAT_100a83d18,0x1008188a0);
  FUN_10003f094(auStack_90);
  FUN_100040bb4(&local_b8,&DAT_100a82c40,&DAT_100817200);
  plVar13[2] = lVar10;
  FUN_1000823d8(puVar16,(undefined *)((long)plVar13 + *(long *)(*plVar13 + 0x60)),FUN_1002c76a8);
  *(long **)(lVar8 + _TtC9Alamofire7Request::mutableState) = plVar13;
  *(char *)(lVar8 + _TtC9Alamofire7Request::shouldAutomaticallyResume) = (char)local_14c;
  lVar5 = lVar8 + _TtC9Alamofire7Request::delegate;
  _swift_beginAccess(lVar5,auStack_148,1,0);
  *(undefined ***)(lVar5 + 8) = &PTR_PTR_1009ae808;
  _swift_unknownObjectWeakAssign(lVar5,unaff_x20);
  if (*(char *)(unaff_x20 + 0x29) == '\x01') {
    FUN_1002e6b44(lVar8,0);
  }
  return lVar8;
}

