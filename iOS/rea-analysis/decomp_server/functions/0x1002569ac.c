// rea decompile_all
// name: FUN_1002569ac
// address: 0x1002569ac
// body: available
// range: 0x1002569ac-0x100256adf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002569ac(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  code *pcVar9;
  
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar8 = *(long *)(lVar2 + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  uVar3 = 0;
  FUN_10025672c();
  _swift_allocObject();
  FUN_10025667c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  lVar5 = _TtC14FlerkenSDKCore7Flerken::foregroundDate;
  lVar4 = 0;
  __s10Foundation4DateVMa();
  pcVar9 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  (*pcVar9)(unaff_x20 + lVar5,1,1,lVar4);
  lVar5 = unaff_x20 + _TtC14FlerkenSDKCore7Flerken::backgroundDate;
  lVar6 = 1;
  (*pcVar9)(lVar5,1,1,lVar4);
  *(undefined8 *)(unaff_x20 + _TtC14FlerkenSDKCore7Flerken::minForegroundSeconds) = 5;
  *(undefined8 *)(unaff_x20 + _TtC14FlerkenSDKCore7Flerken::maxBackgroundSeconds) = 0x708;
  plVar1 = (long *)(unaff_x20 + _TtC14FlerkenSDKCore7Flerken::_session_id);
  __s10Foundation4UUIDVACycfC(&stack0xffffffffffffffb0 + -(lVar7 + 0xfU & 0xfffffffffffffff0));
  __s10Foundation4UUIDV10uuidStringSSvg();
  (**(code **)(lVar8 + 8))(&stack0xffffffffffffffb0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),lVar2);
  *plVar1 = lVar5;
  plVar1[1] = lVar6;
  return;
}

