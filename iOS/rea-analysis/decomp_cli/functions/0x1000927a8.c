// rea decompile_all
// name: FUN_1000927a8
// address: 0x1000927a8
// body: available
// range: 0x1000927a8-0x10009295f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_1000927a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  dispatch_semaphore_t pdVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x21;
  undefined4 *puVar8;
  undefined8 unaff_x28;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  
  uVar5 = param_2;
  uVar6 = param_3;
  FUN_100091f60();
  if (unaff_x21 == 0) {
    puVar1 = &DAT_100104b70;
    local_68 = param_1;
    FUN_10000eb08(&DAT_100104b70,&DAT_1000d5bf8);
    _swift_allocObject();
    puVar8 = (undefined4 *)(puVar1 + 0x18);
    *puVar8 = 0;
    *(undefined **)(puVar1 + 0x10) = PTR___swiftEmptyArrayStorage_1000f0740;
    local_78 = param_2;
    pdVar2 = _dispatch_semaphore_create(0);
    puVar3 = &DAT_100104b78;
    FUN_10000eb08(&DAT_100104b78,&DAT_1000d5c00);
    lVar7 = *(long *)(*(long *)(puVar3 + -8) + 0x40);
    lVar4 = 0;
    local_70 = auStack_80;
    __sScPMa();
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))
              (auStack_80 + -(lVar7 + 0xfU & 0xfffffffffffffff0),1,1,lVar4);
    puVar3 = &DAT_1000f9e90;
    _swift_allocObject(&DAT_1000f9e90,0x60,7);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x20) = local_78;
    *(undefined8 *)(puVar3 + 0x28) = param_3;
    *(undefined8 *)(puVar3 + 0x30) = local_68;
    *(undefined8 *)(puVar3 + 0x38) = uVar5;
    *(undefined8 *)(puVar3 + 0x40) = uVar6;
    *(undefined8 *)(puVar3 + 0x48) = param_4;
    *(undefined **)(puVar3 + 0x50) = puVar1;
    *(dispatch_semaphore_t *)(puVar3 + 0x58) = pdVar2;
    _swift_retain(param_3);
    _swift_retain(puVar1);
    FUN_100092ae8(0,0,auStack_80 + -(lVar7 + 0xfU & 0xfffffffffffffff0),&DAT_1000d5c10,puVar3);
    _swift_release();
    __sSo21OS_dispatch_semaphoreC8DispatchE4waityyF();
    _os_unfair_lock_lock(puVar8);
    unaff_x28 = *(undefined8 *)(puVar1 + 0x10);
    _swift_bridgeObjectRetain(unaff_x28);
    _os_unfair_lock_unlock(puVar8);
    _swift_release(puVar1);
  }
  return unaff_x28;
}

