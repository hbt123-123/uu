// rea decompile_all
// name: FUN_1006281e4
// address: 0x1006281e4
// body: available
// range: 0x1006281e4-0x1006283f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001006283a0) */

undefined1  [16]
FUN_1006281e4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x21;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  long local_88 [3];
  long local_70;
  undefined **ppuStack_68;
  
  lVar2 = 0x20;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
            (0x20,PTR___ss5UInt8VN_100995d40);
  *(undefined8 *)(lVar2 + 0x10) = 0x20;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  _swift_getObjectType(param_1);
  pcVar9 = *(code **)(param_2 + 0x18);
  lVar3 = lVar2;
  _swift_bridgeObjectRetain();
  (*pcVar9)();
  _swift_bridgeObjectRelease(lVar2);
  if (unaff_x21 == 0) {
    _swift_bridgeObjectRetain(lVar3);
    FUN_100628ae0(lVar3);
    _swift_bridgeObjectRetain(param_3);
    FUN_100628ae0();
    lVar4 = lVar2;
    (*pcVar9)(lVar2,param_1,param_2);
    _swift_bridgeObjectRelease(lVar2);
    uVar7 = *(ulong *)(lVar4 + 0x10);
    lVar2 = lVar4;
    if (uVar7 != 0) {
      uVar1 = uVar7 << 1;
      if (0x3f < uVar7) {
        uVar7 = 0x40;
      }
      FUN_100629d98(lVar4,lVar4 + 0x20,uVar7,uVar1 | 1);
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
    uVar8 = *(undefined8 *)(lVar3 + 0x10);
    *(undefined8 *)(lVar6 + 0x18) = uVar8;
    _swift_bridgeObjectRetain(lVar3);
    _mlock(lVar3 + 0x20,uVar8);
    _swift_bridgeObjectRelease(lVar3);
    *(long *)(lVar4 + 0x10) = lVar6;
    ppuStack_68 = &PTR_PTR_1009e5138;
    pcVar9 = (code *)local_88;
    local_88[0] = lVar4;
    local_70 = lVar5;
    FUN_100627ce8(pcVar9,lVar2,param_6);
    FUN_10003f094(local_88);
  }
  else {
    _swift_bridgeObjectRelease(lVar2);
    lVar2 = lVar3;
  }
  auVar10._8_8_ = pcVar9;
  auVar10._0_8_ = lVar2;
  return auVar10;
}

