// rea decompile_all
// name: FUN_1000e1000
// address: 0x1000e1000
// body: available
// range: 0x1000e1000-0x1000e11df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000e1000(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_70 [8];
  long *local_68;
  
  lVar1 = 0;
  local_68 = param_1;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar4 + 0x40));
  puVar7 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar9 = (long)puVar7 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar8 = uVar9 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar6 = uVar8 - extraout_x12_01;
  __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar6,*param_2,param_2[1]);
  __s10Foundation3URLV25deletingLastPathComponentACyF(uVar8);
  __s10Foundation3URLV016standardizedFileB0ACvg(uVar9);
  pcVar5 = *(code **)(lVar4 + 8);
  lVar4 = lVar1;
  (*pcVar5)();
  __s10Foundation3URLV4pathSSvg();
  lVar2 = lVar1;
  (*pcVar5)();
  __s10Foundation3URLV016standardizedFileB0ACvg(puVar7);
  __s10Foundation3URLV4pathSSvg();
  lVar3 = lVar1;
  (*pcVar5)(puVar7);
  if (uVar8 == uVar9 && lVar4 == lVar2) {
    _swift_bridgeObjectRelease(lVar2);
    _swift_bridgeObjectRelease();
  }
  else {
    lVar3 = lVar4;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar8,lVar4,uVar9,lVar2,0);
    _swift_bridgeObjectRelease(lVar2);
    _swift_bridgeObjectRelease();
    if ((uVar8 & 1) == 0) {
      (*pcVar5)(lVar6,lVar1);
      *local_68 = 0;
      local_68[1] = 0;
      return;
    }
  }
  __s10Foundation3URLV17lastPathComponentSSvg();
  (*pcVar5)(lVar6,lVar1);
  *local_68 = lVar4;
  local_68[1] = lVar3;
  return;
}

