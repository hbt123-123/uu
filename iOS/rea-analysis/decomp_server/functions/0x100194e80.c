// rea decompile_all
// name: FUN_100194e80
// address: 0x100194e80
// body: available
// range: 0x100194e80-0x1001953b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100194e80(long param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  dispatch_semaphore_t pdVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long extraout_x8;
  long lVar11;
  undefined8 uVar12;
  char *pcVar13;
  char *pcVar14;
  undefined1 auStack_150 [16];
  long alStack_140 [4];
  undefined1 auStack_120 [8];
  long local_118;
  long local_110;
  long local_108;
  char *local_100;
  char *local_f8;
  undefined1 *local_f0;
  long local_e8;
  undefined *local_e0;
  dispatch_semaphore_t local_d8;
  dispatch_semaphore_t local_d0;
  undefined1 auStack_c8 [48];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar6 = &DAT_100a77040;
  local_e8 = param_2;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  local_f0 = auStack_120 + lVar2;
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    local_d8 = _dispatch_semaphore_create(0);
    puVar6 = &DAT_1009a14c0;
    _swift_allocObject(&DAT_1009a14c0,0x18,7);
    pcVar7 = (code *)(puVar6 + 0x10);
    *(undefined8 *)pcVar7 = 0;
    lVar10 = _TtC14UURemoteServer28ClipboardUploadCopyOperation::currentIndex;
    local_110 = _TtC14UURemoteServer28ClipboardUploadCopyOperation::___lazy_storage___blockCount;
    local_e0 = puVar6;
    _swift_beginAccess(pcVar7,auStack_98,0,0);
    pcVar14 = "$__lazy_storage_$_blockData";
    pcVar13 = s___DataBlock______1008994c0 + 0x10;
    lVar11 = *(long *)(param_1 + lVar10);
    local_100 = "$__lazy_storage_$_blockData";
    local_f8 = s___DataBlock______1008994c0 + 0x10;
    local_118 = lVar10;
    local_108 = param_1;
    do {
      lVar10 = local_118;
      FUN_100194728();
      if ((long)pcVar7 <= lVar11) goto LAB_100195348;
      FUN_100401b14(0);
      FUN_1003fb45c(FUN_1001953b8,0,0xd0000000000000b0,(ulong)pcVar14 | 0x8000000000000000,
                    0xd00000000000001a,(ulong)pcVar13 | 0x8000000000000000,0x36,7);
      uVar12 = *(undefined8 *)(param_1 + lVar10);
      puVar6 = &DAT_1009a1448;
      _swift_allocObject(&DAT_1009a1448,0x18,7);
      _swift_unknownObjectWeakInit(puVar6 + 0x10,param_1);
      puVar8 = &DAT_1009a14e8;
      _swift_allocObject(&DAT_1009a14e8,0x20,7);
      pdVar5 = local_d8;
      *(undefined **)(puVar8 + 0x10) = puVar6;
      *(dispatch_semaphore_t *)(puVar8 + 0x18) = local_d8;
      puVar9 = puVar8;
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)((long)alStack_140 + lVar2) = param_1;
      *(undefined8 *)((long)alStack_140 + lVar2 + 8) = uVar12;
      *(code **)((long)alStack_140 + lVar2 + 0x10) = FUN_100198ae8;
      *(undefined **)((long)alStack_140 + lVar2 + 0x18) = puVar9;
      puVar9 = &DAT_100a77058;
      FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
      _swift_allocObject();
      _swift_retain(puVar6);
      local_d0 = pdVar5;
      pcVar7 = FUN_100198af0;
      FUN_100615648(FUN_100198af0,auStack_150 + lVar2);
      _swift_release(puVar6);
      _swift_release(puVar8);
      lVar10 = 0;
      __s8Dispatch0A13WorkItemFlagsVMa();
      puVar3 = local_f0;
      (**(code **)(*(long *)(lVar10 + -8) + 0x38))(local_f0,1,1,lVar10);
      puVar6 = &DAT_1009a1510;
      _swift_allocObject(&DAT_1009a1510,0x20,7);
      puVar4 = local_e0;
      lVar10 = local_e8;
      *(undefined **)(puVar6 + 0x10) = local_e0;
      *(long *)(puVar6 + 0x18) = local_e8;
      _swift_retain(local_e0);
      _swift_retain();
      FUN_10060edd8();
      _swift_beginAccess();
      uVar12 = *(undefined8 *)(lVar10 + 8);
      _swift_beginAccess(lVar10,auStack_c8,0,0);
      uVar1 = *(undefined1 *)(lVar10 + 0x10);
      puVar8 = &DAT_100a77060;
      FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                    &TargetProtocolConformanceDescriptor_1008488bc);
      FUN_10060913c(uVar12,puVar3,uVar1,FUN_100198b10,puVar6,puVar9,puVar8);
      _swift_release();
      _swift_release(pcVar7);
      pcVar14 = local_100;
      _swift_release(puVar6);
      pcVar13 = local_f8;
      FUN_100040bb4(puVar3,&DAT_100a77040,&DAT_10080e910);
      FUN_1003fb45c(FUN_100195908,0,0xd0000000000000b0,(ulong)pcVar14 | 0x8000000000000000,
                    0xd00000000000001a,(ulong)pcVar13 | 0x8000000000000000,0x43,7);
      __sSo21OS_dispatch_semaphoreC8DispatchE4waityyF();
      FUN_1003fb45c(FUN_100195934,0,0xd0000000000000b0,(ulong)pcVar14 | 0x8000000000000000,
                    0xd00000000000001a,(ulong)pcVar13 | 0x8000000000000000,0x45,7);
      lVar10 = *(long *)(puVar4 + 0x10);
      if (lVar10 != 0) {
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(long *)((long)alStack_140 + lVar2 + 0x10) = lVar10;
        FUN_1003fb45c(FUN_100198b20,(long)alStack_140 + lVar2,0xd0000000000000b0,
                      (ulong)pcVar14 | 0x8000000000000000,0xd00000000000001a,
                      (ulong)pcVar13 | 0x8000000000000000,0x47,7);
        FUN_100198660(lVar10);
        goto LAB_100195348;
      }
      (*(code *)PTR____chkstk_darwin_100995498)();
      param_1 = local_108;
      *(long *)((long)alStack_140 + lVar2 + 0x10) = local_108;
      pcVar7 = FUN_100198b18;
      FUN_1003fb45c(FUN_100198b18,(long)alStack_140 + lVar2,0xd0000000000000b0,
                    (ulong)pcVar14 | 0x8000000000000000,0xd00000000000001a,
                    (ulong)pcVar13 | 0x8000000000000000,0x4b,7);
      lVar11 = *(long *)(param_1 + local_118);
    } while (lVar11 != *(long *)(param_1 + local_110));
    FUN_1001982e4();
LAB_100195348:
    FUN_100401b14(0);
    FUN_1003fb45c(FUN_100195b4c,0,0xd0000000000000b0,(ulong)pcVar14 | 0x8000000000000000,
                  0xd00000000000001a,(ulong)pcVar13 | 0x8000000000000000,0x51,7);
    _swift_release(local_e0);
  }
  return;
}

