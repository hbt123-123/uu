// rea decompile_all
// name: FUN_1002e5614
// address: 0x1002e5614
// body: available
// range: 0x1002e5614-0x1002e5d37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

long FUN_1002e5614(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined4 *puVar10;
  ID IVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long unaff_x20;
  undefined1 *puVar17;
  undefined8 uVar18;
  code *pcVar19;
  undefined8 uVar20;
  undefined *puVar21;
  long local_1a0 [5];
  undefined4 local_174;
  long local_168 [20];
  undefined1 auStack_c8 [8];
  undefined8 local_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined **ppuStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined1 local_70;
  
  lVar3 = 0;
  local_174 = param_4;
  FUN_1002c76a8();
  lVar1 = -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined1 *)((long)local_1a0 + lVar1);
  lVar4 = 0;
  local_1a0[3] = lVar3;
  FUN_1002a7694();
  puVar16 = (undefined8 *)
            (puVar17 + -(*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar3 = 0;
  local_1a0[0] = lVar4;
  __s10Foundation4UUIDVMa();
  local_168[2] = *(long *)(lVar3 + -8);
  uVar15 = *(long *)(local_168[2] + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_168[1] = (long)puVar16 - uVar15;
  local_168[0] = local_168[1] - uVar15;
  local_70 = 1;
  uVar20 = *(undefined8 *)(unaff_x20 + 0x20);
  local_1a0[1] = *(undefined8 *)(unaff_x20 + 0x38);
  uVar18 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar5 = 0;
  local_1a0[2] = param_1;
  local_1a0[4] = lVar3;
  local_98 = param_1;
  uStack_90 = param_2;
  FUN_100338154();
  ppuStack_a0 = &PTR_PTR_1009b2868;
  local_c0 = uVar18;
  local_a8 = uVar5;
  FUN_10007f314(param_3,local_168 + 0x10,&DAT_100a83d18,0x1008188a0);
  if (param_5 == 0) {
    puVar21 = (undefined *)0x0;
    pcVar19 = FUN_1002e5464;
  }
  else {
    puVar21 = &DAT_1009ae700;
    _swift_allocObject(&DAT_1009ae700,0x20,7);
    *(long *)(puVar21 + 0x10) = param_5;
    *(undefined8 *)(puVar21 + 0x18) = param_6;
    pcVar19 = thunk_FUN_1002eecec;
  }
  puVar6 = &DAT_1009ae6d8;
  _swift_allocObject(&DAT_1009ae6d8,0x20,7);
  *(code **)(puVar6 + 0x10) = pcVar19;
  *(undefined **)(puVar6 + 0x18) = puVar21;
  FUN_100008184(local_1a0[2],param_2);
  local_1a0[2] = uVar20;
  _swift_retain(uVar18);
  FUN_10004090c(param_5,param_6);
  lVar4 = local_168[0];
  __s10Foundation4UUIDVACycfC(local_168[0]);
  lVar7 = 0;
  FUN_1002b4ae4();
  _swift_allocObject();
  lVar3 = _TtC9Alamofire15DownloadRequest::mutableDownloadState;
  puVar16[1] = 0xf000000000000000;
  *puVar16 = 0;
  iVar2 = *(int *)(local_1a0[0] + 0x14);
  lVar8 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar8 + -8) + 0x38))((undefined1 *)((long)puVar16 + (long)iVar2),1,1,lVar8)
  ;
  plVar9 = (long *)&DAT_100a821e8;
  FUN_100004bb4(&DAT_100a821e8,&DAT_100816010);
  _swift_allocObject();
  lVar8 = 0;
  FUN_1002c6dd8();
  local_1a0[0] = lVar8;
  _swift_allocObject();
  puVar10 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar8 + 0x10) = puVar10;
  *puVar10 = 0;
  plVar9[2] = lVar8;
  FUN_1000823d8(puVar16,(undefined *)((long)plVar9 + *(long *)(*plVar9 + 0x60)),FUN_1002a7694);
  *(long **)(lVar7 + lVar3) = plVar9;
  FUN_1002b4348(&local_98,lVar7 + _TtC9Alamofire15DownloadRequest::downloadable);
  lVar14 = local_168[1];
  lVar8 = local_1a0[4];
  puVar16 = (undefined8 *)(lVar7 + _TtC9Alamofire15DownloadRequest::destination);
  *puVar16 = thunk_FUN_1002eece0;
  puVar16[1] = puVar6;
  pcVar19 = *(code **)(local_168[2] + 0x10);
  (*pcVar19)(local_168[1],lVar4,local_1a0[4]);
  FUN_10007f314(&local_c0,local_168 + 0xb,&DAT_100a82c40,&DAT_100817200);
  FUN_10007f314(local_168 + 0x10,local_168 + 6,&DAT_100a83d18,0x1008188a0);
  lVar3 = lVar7 + _TtC9Alamofire7Request::delegate;
  *(undefined8 *)(lVar3 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar3,0);
  lVar3 = _TtC9Alamofire7Request::uploadProgress;
  IVar11 = NSProgress::progressWithTotalUnitCount_
                     ((ID)&_OBJC_CLASS___NSProgress,"progressWithTotalUnitCount:",0);
  *(ID *)(lVar7 + lVar3) = IVar11;
  lVar3 = _TtC9Alamofire7Request::downloadProgress;
  IVar11 = NSProgress::progressWithTotalUnitCount_
                     ((ID)&_OBJC_CLASS___NSProgress,"progressWithTotalUnitCount:",0);
  *(ID *)(lVar7 + lVar3) = IVar11;
  lVar3 = _TtC9Alamofire7Request::validators;
  lVar12 = 0;
  FUN_1002763e4(0,&DAT_100a821f0,FUN_1002763c8,FUN_1002c70ac);
  _swift_allocObject();
  lVar4 = local_1a0[0];
  lVar13 = local_1a0[0];
  _swift_allocObject(local_1a0[0],0x18,7);
  puVar10 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar13 + 0x10) = puVar10;
  *puVar10 = 0;
  puVar21 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(long *)(lVar12 + 0x10) = lVar13;
  *(undefined **)(lVar12 + 0x18) = puVar21;
  *(long *)(lVar7 + lVar3) = lVar12;
  (*pcVar19)(lVar7 + _TtC9Alamofire7Request::id,lVar14,lVar8);
  *(long *)(lVar7 + _TtC9Alamofire7Request::underlyingQueue) = local_1a0[2];
  *(long *)(lVar7 + _TtC9Alamofire7Request::serializationQueue) = local_1a0[1];
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
  lVar3 = local_1a0[3];
  iVar2 = *(int *)(local_1a0[3] + 0x5c);
  lVar14 = 0;
  FUN_100277ad0();
  (**(code **)(*(long *)(lVar14 + -8) + 0x38))(puVar17 + iVar2,1,1,lVar14);
  *puVar17 = 0;
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
  *(undefined **)((long)local_168 + lVar1 + 0x98) = puVar21;
  auStack_c8[lVar1] = 0;
  *(undefined **)(auStack_b8 + lVar1 + -8) = puVar21;
  auStack_b8[lVar1] = 0;
  *(undefined8 *)(&stack0xffffffffffffffa0 + lVar1) = 0;
  *(undefined **)(&stack0xffffffffffffffa8 + lVar1) = puVar21;
  *(undefined **)(&stack0xffffffffffffffb0 + lVar1) = puVar21;
  *(undefined **)(&stack0xffffffffffffffb8 + lVar1) = puVar21;
  *(undefined8 *)(&stack0xffffffffffffffc0 + lVar1) = 0;
  puVar17[*(int *)(lVar3 + 0x60)] = 0;
  *(undefined **)(puVar17 + *(int *)(lVar3 + 100)) = puVar21;
  plVar9 = (long *)&DAT_100a84378;
  FUN_100004bb4(&DAT_100a84378,&DAT_100819890);
  _swift_allocObject();
  _swift_allocObject(lVar4,0x18,7);
  puVar10 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar4 + 0x10) = puVar10;
  *puVar10 = 0;
  FUN_100040bb4(local_168 + 6,&DAT_100a83d18,0x1008188a0);
  FUN_100040bb4(local_168 + 0xb,&DAT_100a82c40,&DAT_100817200);
  pcVar19 = *(code **)(local_168[2] + 8);
  (*pcVar19)(local_168[1],lVar8);
  (*pcVar19)(local_168[0],lVar8);
  FUN_100040bb4(local_168 + 0x10,&DAT_100a83d18,0x1008188a0);
  FUN_1002b49a0(&local_98);
  FUN_100040bb4(&local_c0,&DAT_100a82c40,&DAT_100817200);
  plVar9[2] = lVar4;
  FUN_1000823d8(puVar17,(undefined *)((long)plVar9 + *(long *)(*plVar9 + 0x60)),FUN_1002c76a8);
  *(long **)(lVar7 + _TtC9Alamofire7Request::mutableState) = plVar9;
  *(char *)(lVar7 + _TtC9Alamofire7Request::shouldAutomaticallyResume) = (char)local_174;
  lVar1 = lVar7 + _TtC9Alamofire7Request::delegate;
  _swift_beginAccess(lVar1,local_168 + 3,1,0);
  *(undefined ***)(lVar1 + 8) = &PTR_PTR_1009ae808;
  _swift_unknownObjectWeakAssign(lVar1,unaff_x20);
  if (*(char *)(unaff_x20 + 0x29) == '\x01') {
    FUN_1002e6b44(lVar7,0);
  }
  return lVar7;
}

