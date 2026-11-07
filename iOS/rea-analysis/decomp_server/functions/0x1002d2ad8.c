// rea decompile_all
// name: FUN_1002d2ad8
// address: 0x1002d2ad8
// body: available
// range: 0x1002d2ad8-0x1002d2f03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002d2ad8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long local_d0 [3];
  long local_b8 [3];
  long local_a0;
  undefined **ppuStack_98;
  long local_90 [3];
  long local_78;
  undefined **ppuStack_70;
  
  FUN_10007f314(param_1 + 0xf0,local_b8,&DAT_100a82c40,&DAT_100817200);
  if (local_a0 == 0) {
    FUN_100040bb4(local_b8,&DAT_100a82c40,&DAT_100817200);
    uVar7 = *(undefined8 *)(param_3 + _TtC9Alamofire7Request::underlyingQueue);
    puVar5 = &DAT_100a82208;
    FUN_100004bb4(&DAT_100a82208,&DAT_100817900);
    _swift_allocObject();
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    FUN_1000b142c(param_2,puVar5 + 0x20);
    lVar9 = 0;
    FUN_100338154();
    lVar1 = lVar9;
    _swift_allocObject();
    *(undefined8 *)(lVar1 + 0x10) = uVar7;
    puVar6 = &DAT_100a84258;
    FUN_100004bb4(&DAT_100a84258,0x100818b40);
    _swift_allocObject();
    lVar3 = 0;
    FUN_1002c6dd8();
    _swift_allocObject();
    puVar4 = (undefined4 *)0x4;
    _swift_slowAlloc(4,0xffffffffffffffff);
    *(undefined4 **)(lVar3 + 0x10) = puVar4;
    *puVar4 = 0;
    *(long *)(puVar6 + 0x10) = lVar3;
    *(undefined **)(puVar6 + 0x18) = puVar5;
    *(undefined **)(lVar1 + 0x18) = puVar6;
    ppuStack_70 = &PTR_PTR_1009b2868;
    plVar2 = local_90;
    local_90[0] = lVar1;
    local_78 = lVar9;
  }
  else {
    FUN_1000a0074(local_b8,local_90);
    FUN_1000b142c(local_90,local_b8);
    puVar5 = &DAT_100a83418;
    FUN_100004bb4(&DAT_100a83418,&DAT_100817908);
    lVar1 = 0;
    FUN_100338154();
    plVar2 = local_d0;
    _swift_dynamicCast(plVar2,local_b8,puVar5,lVar1,6);
    local_a0 = lVar1;
    if (((ulong)plVar2 & 1) == 0) {
      uVar7 = *(undefined8 *)(param_3 + _TtC9Alamofire7Request::underlyingQueue);
      puVar5 = &DAT_100a82208;
      FUN_100004bb4(&DAT_100a82208,&DAT_100817900);
      _swift_allocObject();
      *(undefined8 *)(puVar5 + 0x18) = 4;
      *(undefined8 *)(puVar5 + 0x10) = 2;
      FUN_1000b142c(local_90,puVar5 + 0x20);
      FUN_1000b142c(param_2,puVar5 + 0x48);
      _swift_allocObject(lVar1,0x20,7);
      *(undefined8 *)(lVar1 + 0x10) = uVar7;
      puVar6 = &DAT_100a84258;
      FUN_100004bb4(&DAT_100a84258,0x100818b40);
      _swift_allocObject();
      lVar9 = 0;
      FUN_1002c6dd8();
      _swift_allocObject();
      puVar4 = (undefined4 *)0x4;
      _swift_slowAlloc(4,0xffffffffffffffff);
      *(undefined4 **)(lVar9 + 0x10) = puVar4;
      *puVar4 = 0;
      *(long *)(puVar6 + 0x10) = lVar9;
      *(undefined **)(puVar6 + 0x18) = puVar5;
      *(undefined **)(lVar1 + 0x18) = puVar6;
      ppuStack_98 = &PTR_PTR_1009b2868;
    }
    else {
      uVar7 = *(undefined8 *)(local_d0[0] + 0x10);
      lVar9 = *(long *)(local_d0[0] + 0x18);
      uVar8 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + 0x10);
      _os_unfair_lock_lock(uVar8);
      _swift_beginAccess(lVar9 + 0x18,local_d0,0,0);
      lVar9 = *(long *)(lVar9 + 0x18);
      _swift_bridgeObjectRetain(lVar9);
      _os_unfair_lock_unlock(uVar8);
      puVar5 = &DAT_100a82208;
      FUN_100004bb4(&DAT_100a82208,&DAT_100817900);
      _swift_initStackObject();
      *(undefined8 *)(puVar5 + 0x18) = 2;
      *(undefined8 *)(puVar5 + 0x10) = 1;
      FUN_1000b142c(param_2,puVar5 + 0x20);
      local_b8[0] = lVar9;
      FUN_1002c5b30(puVar5);
      lVar9 = local_b8[0];
      _swift_allocObject(lVar1,0x20,7);
      *(undefined8 *)(lVar1 + 0x10) = uVar7;
      puVar5 = &DAT_100a84258;
      FUN_100004bb4(&DAT_100a84258,0x100818b40);
      _swift_allocObject();
      lVar3 = 0;
      FUN_1002c6dd8();
      _swift_allocObject();
      puVar4 = (undefined4 *)0x4;
      _swift_slowAlloc(4,0xffffffffffffffff);
      *(undefined4 **)(lVar3 + 0x10) = puVar4;
      *puVar4 = 0;
      *(long *)(puVar5 + 0x10) = lVar3;
      *(long *)(puVar5 + 0x18) = lVar9;
      *(undefined **)(lVar1 + 0x18) = puVar5;
      ppuStack_98 = &PTR_PTR_1009b2868;
      _swift_release(local_d0[0]);
    }
    local_b8[0] = lVar1;
    FUN_10003f094(local_90);
    plVar2 = local_b8;
  }
  FUN_100128b30(plVar2,param_1 + 0xf0,&DAT_100a82c40,&DAT_100817200);
  return;
}

