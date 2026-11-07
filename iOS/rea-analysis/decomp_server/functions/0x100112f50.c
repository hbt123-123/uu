// rea decompile_all
// name: FUN_100112f50
// address: 0x100112f50
// body: available
// range: 0x100112f50-0x10011327b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001001130f0) */

undefined1  [16] FUN_100112f50(undefined8 param_1,long param_2)

{
  long lVar1;
  ID self;
  undefined1 *puVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_90 [16];
  undefined8 local_80;
  long lStack_78;
  undefined1 *local_70;
  char *local_68;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  local_80 = param_1;
  lStack_78 = param_2;
  _swift_retain(uVar6);
  _swift_bridgeObjectRetain(param_2);
  FUN_1003be1c4(&local_70,&local_80);
  _swift_bridgeObjectRelease(param_2);
  _swift_release(uVar6);
  if ((ulong)local_68 >> 0x3c < 0xf) goto LAB_10011325c;
  self = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace,"sharedWorkspace");
  uVar6 = param_1;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  pcVar4 = "iconForFile:";
  NSWorkspace::iconForFile_(self,"iconForFile:",uVar6);
  puVar2 = (undefined1 *)0x0;
  FUN_1003eb674();
  if ((ulong)pcVar4 >> 0x3c < 0xf) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
    local_80 = param_1;
    lStack_78 = param_2;
    local_70 = puVar2;
    local_68 = pcVar4;
    FUN_10010bd10();
    _swift_bridgeObjectRetain(param_2);
    FUN_10010bd10(puVar2,pcVar4);
    _swift_retain(uVar6);
    FUN_1003be2ac(&local_70,&local_80);
    FUN_100006cc8(puVar2,pcVar4);
    _swift_release(uVar6);
    local_70 = puVar2;
    local_68 = pcVar4;
    goto LAB_10011325c;
  }
  uVar6 = param_1;
  lVar5 = param_2;
  FUN_1001144ec(param_1);
  if (lVar5 == 0) {
    local_70 = (undefined1 *)0x0;
    local_68 = (char *)0xf000000000000000;
    goto LAB_10011325c;
  }
  __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(puVar7);
  uVar3 = 0;
  pcVar4 = (char *)0xe500000000000000;
  __sSS9hasSuffixySbSSF(0x736e63692e,0xe500000000000000,uVar6,lVar5);
  _swift_bridgeObjectRelease(lVar5);
  if ((uVar3 & 1) == 0) {
LAB_1001130dc:
    pcVar4 = (char *)0x0;
    puVar2 = puVar7;
    __s10Foundation4DataV10contentsOf7optionsAcA3URLVh_So20NSDataReadingOptionsVtKcfC();
    uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
    local_80 = param_1;
    lStack_78 = param_2;
    local_70 = puVar2;
    local_68 = pcVar4;
    FUN_100008184();
    _swift_bridgeObjectRetain(param_2);
    FUN_100008184(puVar2,pcVar4);
    _swift_retain(uVar6);
    FUN_1003be2ac(&local_70,&local_80);
    FUN_100006cdc(puVar2,pcVar4);
  }
  else {
    FUN_1003ee76c(0);
    puVar2 = puVar7;
    FUN_1003eba08();
    if (0xe < (ulong)pcVar4 >> 0x3c) goto LAB_1001130dc;
    uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
    local_80 = param_1;
    lStack_78 = param_2;
    local_70 = puVar2;
    local_68 = pcVar4;
    FUN_10010bd10();
    _swift_bridgeObjectRetain(param_2);
    FUN_10010bd10(puVar2,pcVar4);
    _swift_retain(uVar6);
    FUN_1003be2ac(&local_70,&local_80);
    FUN_100006cc8(puVar2,pcVar4);
  }
  _swift_release(uVar6);
  (**(code **)(lVar8 + 8))(puVar7,lVar1);
  local_70 = puVar2;
  local_68 = pcVar4;
LAB_10011325c:
  auVar9._8_8_ = local_68;
  auVar9._0_8_ = local_70;
  return auVar9;
}

