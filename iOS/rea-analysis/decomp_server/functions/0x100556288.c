// rea decompile_all
// name: FUN_100556288
// address: 0x100556288
// body: available
// range: 0x100556288-0x1005564b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100556288(ulong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  
  if (param_1 < 1000) {
    if (99 < param_1) goto LAB_1005562e0;
    uVar5 = *unaff_x20;
    if (param_1 < 10) goto LAB_100556398;
  }
  else {
    FUN_100556288(param_1 / 1000);
LAB_1005562e0:
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_1 / 100;
    uVar5 = *unaff_x20;
    uVar3 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      FUN_100506f84(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar3 = *(ulong *)(uVar4 + 0x10);
    uVar5 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_100506f84(uVar5,uVar3 + 1,1,uVar4);
    }
    *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
    *(byte *)(uVar5 + uVar3 + 0x20) =
         (char)(param_1 / 100) + SUB161(auVar1 * ZEXT816(0x199999999999999a),8) * -10 | 0x30;
    *unaff_x20 = uVar5;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1 / 10;
  uVar3 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar4 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
    FUN_100506f84(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
  }
  uVar3 = *(ulong *)(uVar4 + 0x10);
  uVar5 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_100506f84(uVar5,uVar3 + 1,1,uVar4);
  }
  *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
  *(byte *)(uVar5 + uVar3 + 0x20) =
       (char)(param_1 / 10) + SUB161(auVar2 * ZEXT816(0x199999999999999a),8) * -10 | 0x30;
  *unaff_x20 = uVar5;
LAB_100556398:
  uVar3 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar4 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
    FUN_100506f84(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
  }
  uVar3 = *(ulong *)(uVar4 + 0x10);
  uVar5 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_100506f84(uVar5,uVar3 + 1,1,uVar4);
  }
  *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
  *(byte *)(uVar5 + uVar3 + 0x20) = (char)param_1 + (char)(param_1 / 10) * -10 | 0x30;
  *unaff_x20 = uVar5;
  return;
}

