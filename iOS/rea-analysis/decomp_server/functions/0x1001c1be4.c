// rea decompile_all
// name: FUN_1001c1be4
// address: 0x1001c1be4
// body: available
// range: 0x1001c1be4-0x1001c1daf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_1001c1be4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  ulong *param_5)

{
  double dVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  long extraout_x8;
  long lVar5;
  ID IVar6;
  long lVar7;
  ulong uVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_b0 [8];
  undefined1 local_a8 [8];
  ulong local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  undefined1 local_80;
  double local_78;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  uVar8 = *param_5;
  fVar10 = *(float *)((long)param_5 + 0xc);
  fVar11 = *(float *)(param_5 + 2);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar5 = *(long *)(DAT_100b360a8 + 0x80);
  IVar6 = *(ID *)(lVar5 + 0x10);
  _swift_retain(lVar5);
  IVar6 = _objc_msgSend(IVar6,"screenId");
  FUN_100027f54();
  if (IVar6 == 0) {
    _swift_release(lVar5);
    param_3 = 0.0;
    param_4 = 0.0;
  }
  else {
    _objc_msgSend(IVar6,"frame");
    param_3 = param_3 * (double)fVar10;
    _objc_msgSend(IVar6,"frame");
    param_4 = param_4 * (double)fVar11;
    FUN_10003f55c(IVar6);
    _swift_release(lVar5);
  }
  uVar4 = (undefined1)(0x302010001 >> ((uVar8 & 7) << 3));
  if (4 < uVar8) {
    uVar4 = 1;
  }
  dVar9 = (double)*(float *)((long)param_5 + 0x14);
  uVar8 = param_5[1];
  dVar1 = 0.5;
  if ((char)param_5[3] == '\0') {
    dVar1 = dVar9;
  }
  __s10Foundation4DateVACycfC(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar7 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  local_80 = 0;
  puVar3 = local_a8;
  local_a8[0] = uVar4;
  local_a0 = (ulong)(uint)uVar8;
  local_98 = param_3;
  dStack_90 = param_4;
  local_88 = dVar1;
  local_78 = dVar9;
  FUN_10011cea4(puVar3);
  return (uint)puVar3 & 1;
}

