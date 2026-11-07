// rea decompile_all
// name: FUN_1005d2200
// address: 0x1005d2200
// body: available
// range: 0x1005d2200-0x1005d2633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001005d23bc) */

undefined * FUN_1005d2200(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  dispatch_semaphore_t pdVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  void *aBlock;
  undefined1 *puVar9;
  long extraout_x8;
  long extraout_x12;
  undefined *puVar10;
  code *pcVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined1 auStack_1c0 [8];
  undefined8 *local_1b8;
  undefined *local_1b0;
  long local_1a8;
  undefined8 local_1a0;
  long local_198;
  undefined *local_190;
  undefined *local_180;
  undefined8 uStack_178;
  code *local_170;
  undefined *puStack_168;
  code *local_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined1 auStack_88 [40];
  
  lVar2 = 0;
  local_1a0 = param_2;
  __s8Dispatch0A4TimeVMa();
  local_1a8 = *(long *)(lVar2 + -8);
  local_198 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_1a8 + 0x40));
  puVar9 = auStack_1c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar13 = puVar9 + -extraout_x12;
  puVar10 = &DAT_1009d8cb0;
  _swift_allocObject(&DAT_1009d8cb0,0x20,7);
  local_1b8 = (undefined8 *)(puVar10 + 0x10);
  *(undefined8 *)(puVar10 + 0x18) = 0xf000000000000000;
  *local_1b8 = 0;
  puVar3 = &DAT_1009d8cd8;
  local_190 = puVar10;
  _swift_allocObject(&DAT_1009d8cd8,0x18,7);
  puVar12 = (undefined8 *)(puVar3 + 0x10);
  *puVar12 = 0;
  pdVar4 = _dispatch_semaphore_create(0);
  puVar10 = &DAT_1009d8d00;
  _swift_allocObject(&DAT_1009d8d00,0x20,7);
  *(undefined **)(puVar10 + 0x10) = puVar3;
  *(dispatch_semaphore_t *)(puVar10 + 0x18) = pdVar4;
  _swift_retain(puVar3);
  pcVar11 = FUN_1005d42b8;
  FUN_1005d14b8(FUN_1005d42b8,puVar10);
  _swift_release(puVar10);
  if (pcVar11 != (code *)0x0) {
    uStack_b8 = param_1[0x19];
    local_c0 = param_1[0x18];
    uStack_a8 = param_1[0x1b];
    uStack_b0 = param_1[0x1a];
    uStack_98 = param_1[0x1d];
    local_a0 = param_1[0x1c];
    local_90 = *(undefined1 *)(param_1 + 0x1e);
    uStack_f8 = param_1[0x11];
    local_100 = param_1[0x10];
    uStack_e8 = param_1[0x13];
    uStack_f0 = param_1[0x12];
    uStack_d8 = param_1[0x15];
    local_e0 = param_1[0x14];
    uStack_c8 = param_1[0x17];
    uStack_d0 = param_1[0x16];
    uStack_138 = param_1[9];
    local_140 = param_1[8];
    uStack_128 = param_1[0xb];
    uStack_130 = param_1[10];
    uStack_118 = param_1[0xd];
    local_120 = param_1[0xc];
    uStack_108 = param_1[0xf];
    uStack_110 = param_1[0xe];
    uStack_178 = param_1[1];
    local_180 = (undefined *)*param_1;
    puStack_168 = (undefined *)param_1[3];
    local_170 = (code *)param_1[2];
    puStack_158 = (undefined *)param_1[5];
    local_160 = (code *)param_1[4];
    uStack_148 = param_1[7];
    uStack_150 = param_1[6];
    uVar5 = 0;
    local_1b0 = puVar3;
    __s10Foundation11JSONEncoderCMa();
    _swift_allocObject();
    __s10Foundation11JSONEncoderCACycfc();
    uVar6 = uVar5;
    FUN_1005d1150();
    puVar10 = &DAT_1009da430;
    ppuVar7 = &local_180;
    __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(ppuVar7,&DAT_1009da430,uVar6);
    _swift_release(uVar5);
    ppuVar8 = ppuVar7;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(ppuVar7,puVar10);
    FUN_100006cdc(ppuVar7,puVar10);
    puVar10 = &DAT_1009d8d28;
    _swift_allocObject(&DAT_1009d8d28,0x20,7);
    puVar3 = local_190;
    *(undefined **)(puVar10 + 0x10) = local_190;
    *(dispatch_semaphore_t *)(puVar10 + 0x18) = pdVar4;
    local_160 = FUN_1005d4368;
    local_180 = PTR___NSConcreteStackBlock_100995490;
    uStack_178 = 0x42000000;
    local_170 = FUN_1005d0aa8;
    puStack_168 = &DAT_1009d8d40;
    puStack_158 = puVar10;
    aBlock = __Block_copy(&local_180);
    puVar10 = puStack_158;
    _swift_retain(puVar3);
    _swift_release(puVar10);
    _objc_msgSend((ID)pcVar11,"receiveAsync:reply:",ppuVar8,aBlock);
    _swift_unknownObjectRelease(pcVar11);
    __Block_release(aBlock);
    puVar3 = local_1b0;
  }
  __s8Dispatch0A4TimeV3nowACyFZ(puVar9);
  __s8Dispatch1poiyAA0A4TimeVAD_AA0aB8IntervalOtF(puVar13,puVar9,local_1a0);
  lVar2 = local_198;
  pcVar11 = *(code **)(local_1a8 + 8);
  (*pcVar11)(puVar9,local_198);
  puVar9 = puVar13;
  __sSo21OS_dispatch_semaphoreC8DispatchE4wait7timeoutAC0D13TimeoutResultOAC0D4TimeV_tF();
  (*pcVar11)(puVar13,lVar2);
  if (((ulong)puVar9 & 1) == 0) {
    _swift_beginAccess(puVar12,&local_180,0,0);
    puVar1 = local_1b8;
    puVar10 = (undefined *)*puVar12;
    if (puVar10 == (undefined *)0x0) {
      puVar12 = local_1b8;
      _swift_beginAccess(local_1b8,auStack_88,0,0);
      if (*(ulong *)(local_190 + 0x18) >> 0x3c < 0xf) {
        puVar10 = (undefined *)*puVar1;
        FUN_100008184(puVar10,*(ulong *)(local_190 + 0x18));
        _swift_release(puVar3);
      }
      else {
        FUN_1005d42c0();
        puVar10 = &DAT_1009d90b8;
        _swift_allocError(&DAT_1009d90b8,puVar12,0,0);
        *(undefined1 *)puVar12 = 1;
        _swift_release(puVar3);
      }
      goto LAB_1005d256c;
    }
    _swift_errorRetain(puVar10);
  }
  else {
    FUN_1005d42c0();
    puVar10 = &DAT_1009d90b8;
    _swift_allocError(&DAT_1009d90b8,puVar13,0,0);
    *puVar13 = 0;
  }
  _swift_release(puVar3);
LAB_1005d256c:
  _swift_release(local_190);
  return puVar10;
}

