// rea decompile_all
// name: FUN_1006283f8
// address: 0x1006283f8
// body: available
// range: 0x1006283f8-0x10062872b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100628598) */
/* WARNING: Removing unreachable block (ram,0x000100628668) */
/* WARNING: Removing unreachable block (ram,0x0001006285b4) */
/* WARNING: Removing unreachable block (ram,0x0001006284d4) */

undefined1  [16]
FUN_1006283f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long unaff_x21;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  long local_88 [3];
  long local_70;
  undefined **ppuStack_68;
  
  FUN_10066326c(0);
  _swift_allocObject();
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_1006619e0(param_2,param_3,0);
  plVar8 = param_5;
  if (unaff_x21 == 0) {
    _swift_retain();
    lVar3 = 0x20;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (0x20,PTR___ss5UInt8VN_100995d40);
    *(undefined8 *)(lVar3 + 0x10) = 0x20;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    lVar4 = lVar3;
    _swift_bridgeObjectRetain();
    FUN_100661cb0();
    _swift_bridgeObjectRelease_n(lVar3,2);
    lVar5 = 0;
    FUN_10066bebc();
    lVar3 = lVar5;
    _swift_allocObject();
    lVar6 = 0;
    FUN_1006790a4();
    _swift_allocObject();
    *(long *)(lVar6 + 0x10) = lVar4;
    uVar10 = *(undefined8 *)(lVar4 + 0x10);
    *(undefined8 *)(lVar6 + 0x18) = uVar10;
    _swift_bridgeObjectRetain_n(lVar4,2);
    _mlock(lVar4 + 0x20,uVar10);
    _swift_bridgeObjectRelease(lVar4);
    *(long *)(lVar3 + 0x10) = lVar6;
    ppuStack_68 = &PTR_PTR_1009e5138;
    plVar7 = local_88;
    local_88[0] = lVar3;
    local_70 = lVar5;
    FUN_100627ce8(plVar7,param_1,param_4);
    FUN_10003f094(local_88);
    plVar8 = plVar7;
    FUN_100572fcc(plVar7,param_5);
    _swift_bridgeObjectRelease(plVar7);
    if (((ulong)plVar8 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar4);
      _swift_release_n(param_2,2);
      _swift_bridgeObjectRetain(param_1);
    }
    else {
      if (SCARRY8(*(long *)(param_1 + 0x10),0x40)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006286f8);
        (*pcVar2)();
      }
      lVar3 = 0;
      FUN_1006295a0(0,*(long *)(param_1 + 0x10) + 0x40,0,PTR___swiftEmptyArrayStorage_100995ea0);
      local_88[0] = lVar3;
      _swift_bridgeObjectRetain(lVar4);
      FUN_100628ae0();
      FUN_100628ae0(lVar4);
      _swift_bridgeObjectRetain(param_1);
      FUN_100628ae0();
      lVar4 = local_88[0];
      lVar3 = local_88[0];
      _swift_bridgeObjectRetain();
      FUN_100661ba8();
      _swift_bridgeObjectRelease_n(lVar4,2);
      uVar9 = *(ulong *)(lVar3 + 0x10);
      param_1 = lVar3;
      if (uVar9 != 0) {
        uVar1 = uVar9 << 1;
        if (0x3f < uVar9) {
          uVar9 = 0x40;
        }
        FUN_100629d98(lVar3,lVar3 + 0x20,uVar9,uVar1 | 1);
        _swift_bridgeObjectRelease(lVar3);
      }
      _swift_release_n(param_2,2);
    }
  }
  auVar11._8_4_ = (uint)plVar8 & 1;
  auVar11._0_8_ = param_1;
  auVar11._12_4_ = 0;
  return auVar11;
}

