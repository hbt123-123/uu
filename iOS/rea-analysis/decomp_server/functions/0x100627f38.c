// rea decompile_all
// name: FUN_100627f38
// address: 0x100627f38
// body: available
// range: 0x100627f38-0x1006281e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100628084) */
/* WARNING: Removing unreachable block (ram,0x000100628170) */
/* WARNING: Removing unreachable block (ram,0x00010062800c) */
/* WARNING: Removing unreachable block (ram,0x00010062809c) */
/* WARNING: Removing unreachable block (ram,0x0001006280a4) */

undefined1  [16]
FUN_100627f38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long unaff_x21;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  long local_80 [3];
  long local_68;
  undefined **ppuStack_60;
  long local_58;
  
  plVar7 = local_80;
  lVar2 = 0;
  FUN_10066326c(0);
  _swift_allocObject();
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_1006619e0(param_2,param_3,0);
  if (unaff_x21 == 0) {
    _swift_retain();
    lVar2 = 0x20;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (0x20,PTR___ss5UInt8VN_100995d40);
    *(undefined8 *)(lVar2 + 0x10) = 0x20;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    lVar3 = lVar2;
    local_58 = lVar2;
    _swift_bridgeObjectRetain();
    FUN_100661cb0();
    _swift_bridgeObjectRelease(lVar2);
    _swift_bridgeObjectRetain(lVar3);
    FUN_100628ae0();
    _swift_bridgeObjectRetain(param_1);
    FUN_100628ae0();
    lVar2 = local_58;
    lVar4 = local_58;
    _swift_bridgeObjectRetain();
    FUN_100661cb0();
    _swift_bridgeObjectRelease_n(lVar2,2);
    uVar8 = *(ulong *)(lVar4 + 0x10);
    lVar2 = lVar4;
    if (uVar8 != 0) {
      uVar1 = uVar8 << 1;
      if (0x3f < uVar8) {
        uVar8 = 0x40;
      }
      FUN_100629d98(lVar4,lVar4 + 0x20,uVar8,uVar1 | 1);
      _swift_bridgeObjectRelease(lVar4);
    }
    lVar5 = 0;
    FUN_10066bebc();
    lVar4 = lVar5;
    _swift_allocObject();
    lVar6 = 0;
    FUN_1006790a4();
    _swift_allocObject();
    *(long *)(lVar6 + 0x10) = lVar3;
    uVar9 = *(undefined8 *)(lVar3 + 0x10);
    *(undefined8 *)(lVar6 + 0x18) = uVar9;
    _swift_bridgeObjectRetain(lVar3);
    _mlock(lVar3 + 0x20,uVar9);
    _swift_bridgeObjectRelease(lVar3);
    *(long *)(lVar4 + 0x10) = lVar6;
    ppuStack_60 = &PTR_PTR_1009e5138;
    local_80[0] = lVar4;
    local_68 = lVar5;
    FUN_100627ce8(local_80,lVar2,param_4);
    _swift_release_n(param_2,2);
    FUN_10003f094(local_80);
    param_4 = (undefined1 *)plVar7;
  }
  auVar10._8_8_ = param_4;
  auVar10._0_8_ = lVar2;
  return auVar10;
}

