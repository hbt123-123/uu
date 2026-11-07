// rea decompile_all
// name: FUN_1002ffe4c
// address: 0x1002ffe4c
// body: available
// range: 0x1002ffe4c-0x1003003cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

long FUN_1002ffe4c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,long param_10,long param_11,long param_12,undefined8 param_13)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined4 *puVar11;
  ID IVar12;
  long lVar13;
  long *plVar14;
  undefined1 *puVar15;
  code *pcVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long alStack_160 [7];
  undefined4 local_124;
  long local_120 [19];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  long local_78;
  undefined8 auStack_70 [2];
  
  uVar18 = param_13;
  lVar2 = param_12;
  lVar8 = param_11;
  local_120[1] = param_9;
  local_120[0] = param_10;
  lVar6 = 0;
  alStack_160[2] = param_1;
  alStack_160[4] = param_4;
  alStack_160[5] = param_5;
  local_124 = param_8;
  local_120[3] = param_7;
  local_120[4] = param_6;
  FUN_1002c76a8();
  lVar4 = -(*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = (undefined1 *)((long)alStack_160 + lVar4);
  lVar7 = 0;
  alStack_160[6] = lVar6;
  __s10Foundation4UUIDVMa();
  lVar17 = *(long *)(lVar7 + -8);
  local_120[2] = (long)puVar15 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_78 = lVar2;
  auStack_70[0] = uVar18;
  alStack_160[1] = lVar7;
  alStack_160[3] = lVar17;
  FUN_1000efc08(local_120 + 0x12);
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))();
  _swift_allocObject(lVar8,*(undefined4 *)(lVar8 + 0x30),*(undefined2 *)(lVar8 + 0x34));
  lVar2 = _TtC9Alamofire16WebSocketRequest::socketMutableState;
  puVar9 = &DAT_100a82220;
  FUN_100004bb4(&DAT_100a82220,&DAT_100816030);
  _swift_allocObject();
  lVar10 = 0;
  FUN_1002c6dd8();
  lVar6 = lVar10;
  _swift_allocObject();
  puVar11 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar6 + 0x10) = puVar11;
  *puVar11 = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(long *)(puVar9 + 0x10) = lVar6;
  *(undefined **)(puVar9 + 0x18) = puVar5;
  *(undefined **)(puVar9 + 0x20) = puVar5;
  *(undefined8 *)(puVar9 + 0x28) = 0;
  *(undefined **)(lVar8 + lVar2) = puVar9;
  FUN_1000b142c(local_120 + 0x12,lVar8 + _TtC9Alamofire16WebSocketRequest::convertible);
  lVar7 = local_120[2];
  lVar6 = alStack_160[1];
  puVar1 = (undefined8 *)(lVar8 + _TtC9Alamofire16WebSocketRequest::configuration);
  uVar18 = *param_3;
  uVar20 = param_3[3];
  uVar19 = param_3[2];
  puVar1[1] = param_3[1];
  *puVar1 = uVar18;
  puVar1[3] = uVar20;
  puVar1[2] = uVar19;
  *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_3 + 4);
  pcVar16 = *(code **)(lVar17 + 0x10);
  (*pcVar16)(local_120[2],param_1,alStack_160[1]);
  FUN_10007f314(local_120[4],local_120 + 0xd,&DAT_100a82c40,&DAT_100817200);
  FUN_10007f314(local_120[3],local_120 + 8,&DAT_100a83d18,0x1008188a0);
  lVar2 = lVar8 + _TtC9Alamofire7Request::delegate;
  *(undefined8 *)(lVar2 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar2,0);
  lVar2 = _TtC9Alamofire7Request::uploadProgress;
  IVar12 = NSProgress::progressWithTotalUnitCount_
                     ((ID)&_OBJC_CLASS___NSProgress,"progressWithTotalUnitCount:",0);
  *(ID *)(lVar8 + lVar2) = IVar12;
  lVar2 = _TtC9Alamofire7Request::downloadProgress;
  IVar12 = NSProgress::progressWithTotalUnitCount_
                     ((ID)&_OBJC_CLASS___NSProgress,"progressWithTotalUnitCount:",0);
  *(ID *)(lVar8 + lVar2) = IVar12;
  lVar2 = _TtC9Alamofire7Request::validators;
  lVar13 = 0;
  FUN_1002763e4(0,&DAT_100a821f0,FUN_1002763c8,FUN_1002c70ac);
  _swift_allocObject();
  lVar17 = lVar10;
  _swift_allocObject(lVar10,0x18,7);
  puVar11 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar17 + 0x10) = puVar11;
  *puVar11 = 0;
  *(long *)(lVar13 + 0x10) = lVar17;
  *(undefined **)(lVar13 + 0x18) = puVar5;
  *(long *)(lVar8 + lVar2) = lVar13;
  (*pcVar16)(lVar8 + _TtC9Alamofire7Request::id,lVar7,lVar6);
  *(long *)(lVar8 + _TtC9Alamofire7Request::underlyingQueue) = alStack_160[4];
  *(long *)(lVar8 + _TtC9Alamofire7Request::serializationQueue) = alStack_160[5];
  *(undefined8 *)((long)local_120 + lVar4) = 0;
  *(undefined8 *)(&stack0xfffffffffffffed8 + lVar4) = 0;
  *(undefined8 *)((long)local_120 + lVar4 + 0x10) = 0;
  *(undefined8 *)((long)local_120 + lVar4 + 8) = 0;
  *(undefined8 *)((long)local_120 + lVar4 + 0x20) = 0;
  *(undefined8 *)((long)local_120 + lVar4 + 0x18) = 0;
  *(undefined8 *)((long)local_120 + lVar4 + 0x30) = 0;
  *(undefined8 *)((long)local_120 + lVar4 + 0x28) = 0;
  *(undefined8 *)((long)local_120 + lVar4 + 0x40) = 0;
  *(undefined8 *)((long)local_120 + lVar4 + 0x38) = 0;
  FUN_10007f314(local_120 + 0xd,(long)auStack_70 + lVar4,&DAT_100a82c40,&DAT_100817200);
  FUN_10007f314(local_120 + 8,&stack0xffffffffffffffb8 + lVar4,&DAT_100a83d18,0x1008188a0);
  lVar2 = alStack_160[6];
  iVar3 = *(int *)(alStack_160[6] + 0x5c);
  lVar7 = 0;
  FUN_100277ad0();
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(puVar15 + iVar3,1,1,lVar7);
  *puVar15 = 0;
  *(undefined8 *)((long)alStack_160 + lVar4 + 0x10) = 0;
  *(undefined8 *)((long)alStack_160 + lVar4 + 8) = 0;
  *(undefined8 *)((long)alStack_160 + lVar4 + 0x20) = 0;
  *(undefined8 *)((long)alStack_160 + lVar4 + 0x18) = 0;
  *(undefined8 *)((long)alStack_160 + lVar4 + 0x30) = 0;
  *(undefined8 *)((long)alStack_160 + lVar4 + 0x28) = 0;
  *(undefined8 *)((long)local_120 + lVar4 + 0x50) = 0;
  *(undefined8 *)((long)local_120 + lVar4 + 0x48) = 0;
  *(undefined8 *)((long)local_120 + lVar4 + 0x60) = 0;
  *(undefined8 *)((long)local_120 + lVar4 + 0x58) = 0;
  *(undefined8 *)((long)local_120 + lVar4 + 0x70) = 0;
  *(undefined8 *)((long)local_120 + lVar4 + 0x68) = 0;
  *(undefined8 *)((long)local_120 + lVar4 + 0x80) = 0;
  *(undefined8 *)((long)local_120 + lVar4 + 0x78) = 0;
  *(undefined8 *)((long)local_120 + lVar4 + 0x88) = 0;
  *(undefined **)((long)local_120 + lVar4 + 0x90) = puVar5;
  auStack_88[lVar4] = 0;
  *(undefined **)((long)&uStack_80 + lVar4) = puVar5;
  *(undefined1 *)((long)auStack_70 + lVar4 + -8) = 0;
  *(undefined8 *)(&stack0xffffffffffffffe0 + lVar4) = 0;
  *(undefined **)(&stack0xffffffffffffffe8 + lVar4) = puVar5;
  *(undefined **)(&stack0xfffffffffffffff0 + lVar4) = puVar5;
  *(undefined **)(&stack0xfffffffffffffff8 + lVar4) = puVar5;
  *(undefined8 *)((long)&param_9 + lVar4) = 0;
  puVar15[*(int *)(lVar2 + 0x60)] = 0;
  *(undefined **)(puVar15 + *(int *)(lVar2 + 100)) = puVar5;
  plVar14 = (long *)&DAT_100a84378;
  FUN_100004bb4(&DAT_100a84378,&DAT_100819890);
  _swift_allocObject();
  _swift_allocObject(lVar10,0x18,7);
  puVar11 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar10 + 0x10) = puVar11;
  *puVar11 = 0;
  FUN_100040bb4(local_120[3],&DAT_100a83d18,0x1008188a0);
  FUN_100040bb4(local_120[4],&DAT_100a82c40,&DAT_100817200);
  pcVar16 = *(code **)(alStack_160[3] + 8);
  (*pcVar16)(alStack_160[2],lVar6);
  FUN_100040bb4(local_120 + 8,&DAT_100a83d18,0x1008188a0);
  FUN_100040bb4(local_120 + 0xd,&DAT_100a82c40,&DAT_100817200);
  (*pcVar16)(local_120[2],lVar6);
  FUN_10003f094(local_120 + 0x12);
  plVar14[2] = lVar10;
  FUN_1000823d8(puVar15,(undefined *)((long)plVar14 + *(long *)(*plVar14 + 0x60)),FUN_1002c76a8);
  *(long **)(lVar8 + _TtC9Alamofire7Request::mutableState) = plVar14;
  *(char *)(lVar8 + _TtC9Alamofire7Request::shouldAutomaticallyResume) = (char)local_124;
  lVar2 = lVar8 + _TtC9Alamofire7Request::delegate;
  _swift_beginAccess(lVar2,local_120 + 5,1,0);
  *(long *)(lVar2 + 8) = local_120[0];
  _swift_unknownObjectWeakAssign(lVar2,local_120[1]);
  return lVar8;
}

