// rea decompile_all
// name: FUN_1002e4d78
// address: 0x1002e4d78
// body: available
// range: 0x1002e4d78-0x1002e5463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

long FUN_1002e4d78(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined4 *puVar11;
  ID IVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long unaff_x20;
  undefined *puVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  code *pcVar21;
  undefined8 uVar22;
  long local_1a0 [5];
  undefined4 local_174;
  long local_168 [20];
  undefined1 auStack_c8 [8];
  undefined8 local_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined **ppuStack_a0;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [24];
  undefined1 local_70;
  
  lVar4 = 0;
  local_174 = param_3;
  FUN_1002c76a8();
  lVar1 = -(*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar18 = (undefined1 *)((long)local_1a0 + lVar1);
  lVar5 = 0;
  local_1a0[3] = lVar4;
  FUN_1002a7694();
  puVar16 = (undefined8 *)
            (puVar18 + -(*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0;
  local_1a0[0] = lVar5;
  __s10Foundation4UUIDVMa();
  local_168[2] = *(long *)(lVar4 + -8);
  uVar15 = *(long *)(local_168[2] + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_168[1] = (long)puVar16 - uVar15;
  local_168[0] = local_168[1] - uVar15;
  local_1a0[4] = lVar4;
  FUN_1000b142c(param_1,auStack_98);
  local_70 = 0;
  uVar19 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar22 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar20 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar6 = 0;
  FUN_100338154();
  ppuStack_a0 = &PTR_PTR_1009b2868;
  local_c0 = uVar20;
  local_a8 = uVar6;
  FUN_10007f314(param_2,local_168 + 0x10,&DAT_100a83d18,0x1008188a0);
  if (param_4 == 0) {
    puVar17 = (undefined *)0x0;
    pcVar21 = FUN_1002e5464;
  }
  else {
    puVar17 = &DAT_1009ae6b0;
    _swift_allocObject(&DAT_1009ae6b0,0x20,7);
    *(long *)(puVar17 + 0x10) = param_4;
    *(undefined8 *)(puVar17 + 0x18) = param_5;
    pcVar21 = thunk_FUN_1002eecec;
  }
  puVar7 = &DAT_1009ae688;
  _swift_allocObject(&DAT_1009ae688,0x20,7);
  *(code **)(puVar7 + 0x10) = pcVar21;
  *(undefined **)(puVar7 + 0x18) = puVar17;
  local_1a0[1] = uVar22;
  local_1a0[2] = uVar19;
  _swift_retain(uVar20);
  FUN_10004090c(param_4,param_5);
  lVar14 = local_168[0];
  __s10Foundation4UUIDVACycfC(local_168[0]);
  lVar8 = 0;
  FUN_1002b4ae4();
  _swift_allocObject();
  lVar4 = _TtC9Alamofire15DownloadRequest::mutableDownloadState;
  puVar16[1] = 0xf000000000000000;
  *puVar16 = 0;
  iVar2 = *(int *)(local_1a0[0] + 0x14);
  lVar5 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))((undefined1 *)((long)puVar16 + (long)iVar2),1,1,lVar5)
  ;
  plVar9 = (long *)&DAT_100a821e8;
  FUN_100004bb4(&DAT_100a821e8,&DAT_100816010);
  _swift_allocObject();
  lVar10 = 0;
  FUN_1002c6dd8();
  lVar5 = lVar10;
  _swift_allocObject();
  puVar11 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar5 + 0x10) = puVar11;
  *puVar11 = 0;
  plVar9[2] = lVar5;
  FUN_1000823d8(puVar16,(undefined *)((long)plVar9 + *(long *)(*plVar9 + 0x60)),FUN_1002a7694);
  *(long **)(lVar8 + lVar4) = plVar9;
  FUN_1002b4348(auStack_98,lVar8 + _TtC9Alamofire15DownloadRequest::downloadable);
  lVar3 = local_168[1];
  lVar5 = local_1a0[4];
  puVar16 = (undefined8 *)(lVar8 + _TtC9Alamofire15DownloadRequest::destination);
  *puVar16 = FUN_1002eece0;
  puVar16[1] = puVar7;
  pcVar21 = *(code **)(local_168[2] + 0x10);
  (*pcVar21)(local_168[1],lVar14,local_1a0[4]);
  FUN_10007f314(&local_c0,local_168 + 0xb,&DAT_100a82c40,&DAT_100817200);
  FUN_10007f314(local_168 + 0x10,local_168 + 6,&DAT_100a83d18,0x1008188a0);
  lVar4 = lVar8 + _TtC9Alamofire7Request::delegate;
  *(undefined8 *)(lVar4 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar4,0);
  lVar4 = _TtC9Alamofire7Request::uploadProgress;
  IVar12 = NSProgress::progressWithTotalUnitCount_
                     ((ID)&_OBJC_CLASS___NSProgress,"progressWithTotalUnitCount:",0);
  *(ID *)(lVar8 + lVar4) = IVar12;
  lVar4 = _TtC9Alamofire7Request::downloadProgress;
  IVar12 = NSProgress::progressWithTotalUnitCount_
                     ((ID)&_OBJC_CLASS___NSProgress,"progressWithTotalUnitCount:",0);
  *(ID *)(lVar8 + lVar4) = IVar12;
  lVar4 = _TtC9Alamofire7Request::validators;
  lVar13 = 0;
  FUN_1002763e4(0,&DAT_100a821f0,FUN_1002763c8,FUN_1002c70ac);
  _swift_allocObject();
  lVar14 = lVar10;
  _swift_allocObject(lVar10,0x18,7);
  puVar11 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar14 + 0x10) = puVar11;
  *puVar11 = 0;
  puVar17 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(long *)(lVar13 + 0x10) = lVar14;
  *(undefined **)(lVar13 + 0x18) = puVar17;
  *(long *)(lVar8 + lVar4) = lVar13;
  (*pcVar21)(lVar8 + _TtC9Alamofire7Request::id,lVar3,lVar5);
  *(long *)(lVar8 + _TtC9Alamofire7Request::underlyingQueue) = local_1a0[2];
  *(long *)(lVar8 + _TtC9Alamofire7Request::serializationQueue) = local_1a0[1];
  *(undefined8 *)((long)local_168 + lVar1 + 8) = 0;
  *(undefined8 *)((long)local_168 + lVar1) = 0;
  *(undefined8 *)((long)local_168 + lVar1 + 0x18) = 0;
  *(undefined8 *)((long)local_168 + lVar1 + 0x10) = 0;
  *(undefined8 *)((long)local_168 + lVar1 + 0x28) = 0;
  *(undefined8 *)((long)local_168 + lVar1 + 0x20) = 0;
  *(undefined8 *)((long)local_168 + lVar1 + 0x38) = 0;
  *(undefined8 *)((long)local_168 + lVar1 + 0x30) = 0;
  *(undefined8 *)((long)local_168 + lVar1 + 0x48) = 0;
  *(undefined8 *)((long)local_168 + lVar1 + 0x40) = 0;
  FUN_10007f314(local_168 + 0xb,auStack_b0 + lVar1,&DAT_100a82c40,&DAT_100817200);
  FUN_10007f314(local_168 + 6,auStack_88 + lVar1,&DAT_100a83d18,0x1008188a0);
  lVar4 = local_1a0[3];
  iVar2 = *(int *)(local_1a0[3] + 0x5c);
  lVar14 = 0;
  FUN_100277ad0();
  (**(code **)(*(long *)(lVar14 + -8) + 0x38))(puVar18 + iVar2,1,1,lVar14);
  *puVar18 = 0;
  *(undefined8 *)((long)local_1a0 + lVar1 + 0x10) = 0;
  *(undefined8 *)((long)local_1a0 + lVar1 + 8) = 0;
  *(undefined8 *)((long)local_1a0 + lVar1 + 0x20) = 0;
  *(undefined8 *)((long)local_1a0 + lVar1 + 0x18) = 0;
  *(undefined8 *)((long)local_168 + lVar1 + -8) = 0;
  *(undefined8 *)(&stack0xfffffffffffffe88 + lVar1) = 0;
  *(undefined8 *)((long)local_168 + lVar1 + 0x58) = 0;
  *(undefined8 *)((long)local_168 + lVar1 + 0x50) = 0;
  *(undefined8 *)((long)local_168 + lVar1 + 0x68) = 0;
  *(undefined8 *)((long)local_168 + lVar1 + 0x60) = 0;
  *(undefined8 *)((long)local_168 + lVar1 + 0x78) = 0;
  *(undefined8 *)((long)local_168 + lVar1 + 0x70) = 0;
  *(undefined8 *)((long)local_168 + lVar1 + 0x88) = 0;
  *(undefined8 *)((long)local_168 + lVar1 + 0x80) = 0;
  *(undefined8 *)((long)local_168 + lVar1 + 0x90) = 0;
  *(undefined **)((long)local_168 + lVar1 + 0x98) = puVar17;
  auStack_c8[lVar1] = 0;
  *(undefined **)(auStack_b8 + lVar1 + -8) = puVar17;
  auStack_b8[lVar1] = 0;
  *(undefined8 *)(&stack0xffffffffffffffa0 + lVar1) = 0;
  *(undefined **)(&stack0xffffffffffffffa8 + lVar1) = puVar17;
  *(undefined **)(&stack0xffffffffffffffb0 + lVar1) = puVar17;
  *(undefined **)(&stack0xffffffffffffffb8 + lVar1) = puVar17;
  *(undefined8 *)(&stack0xffffffffffffffc0 + lVar1) = 0;
  puVar18[*(int *)(lVar4 + 0x60)] = 0;
  *(undefined **)(puVar18 + *(int *)(lVar4 + 100)) = puVar17;
  plVar9 = (long *)&DAT_100a84378;
  FUN_100004bb4(&DAT_100a84378,&DAT_100819890);
  _swift_allocObject();
  _swift_allocObject(lVar10,0x18,7);
  puVar11 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar10 + 0x10) = puVar11;
  *puVar11 = 0;
  FUN_100040bb4(local_168 + 6,&DAT_100a83d18,0x1008188a0);
  FUN_100040bb4(local_168 + 0xb,&DAT_100a82c40,&DAT_100817200);
  pcVar21 = *(code **)(local_168[2] + 8);
  (*pcVar21)(local_168[1],lVar5);
  (*pcVar21)(local_168[0],lVar5);
  FUN_100040bb4(local_168 + 0x10,&DAT_100a83d18,0x1008188a0);
  FUN_1002b49a0(auStack_98);
  FUN_100040bb4(&local_c0,&DAT_100a82c40,&DAT_100817200);
  plVar9[2] = lVar10;
  FUN_1000823d8(puVar18,(undefined *)((long)plVar9 + *(long *)(*plVar9 + 0x60)),FUN_1002c76a8);
  *(long **)(lVar8 + _TtC9Alamofire7Request::mutableState) = plVar9;
  *(char *)(lVar8 + _TtC9Alamofire7Request::shouldAutomaticallyResume) = (char)local_174;
  lVar1 = lVar8 + _TtC9Alamofire7Request::delegate;
  _swift_beginAccess(lVar1,local_168 + 3,1,0);
  *(undefined ***)(lVar1 + 8) = &PTR_PTR_1009ae808;
  _swift_unknownObjectWeakAssign(lVar1,unaff_x20);
  if (*(char *)(unaff_x20 + 0x29) == '\x01') {
    FUN_1002e6b44(lVar8,0);
  }
  return lVar8;
}

