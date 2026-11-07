// rea decompile_all
// name: FUN_1005669dc
// address: 0x1005669dc
// body: available
// range: 0x1005669dc-0x100566b13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100566b10 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005669dc(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  param_1 = (undefined8 *)*param_1;
  uVar5 = param_1[9];
  uVar1 = param_1[10];
  lVar4 = param_1[0xb];
  if ((param_2 & 1) == 0) {
    uVar2 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((uVar2 & 1) == 0) {
      lVar6 = param_1[0xb];
      uVar3 = 0;
      FUN_1004f71ec(0);
      _swift_allocObject();
      FUN_1004f668c(lVar4,uVar3);
      *(long *)(lVar6 + 0x10) = lVar4;
    }
    *param_1 = uVar5;
    param_1[1] = uVar1;
    *(undefined1 *)(param_1 + 5) = 0;
    _swift_beginAccess(lVar4 + 0x20,param_1 + 6,0x21,0);
    FUN_1004f99e8(param_1,lVar4 + 0x20);
    _swift_endAccess(param_1 + 6);
  }
  else {
    FUN_100008184(uVar5,uVar1);
    uVar2 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((uVar2 & 1) == 0) {
      lVar6 = param_1[0xb];
      uVar3 = 0;
      FUN_1004f71ec(0);
      _swift_allocObject();
      FUN_1004f668c(lVar4,uVar3);
      *(long *)(lVar6 + 0x10) = lVar4;
    }
    *param_1 = uVar5;
    param_1[1] = uVar1;
    *(undefined1 *)(param_1 + 5) = 0;
    _swift_beginAccess(lVar4 + 0x20,param_1 + 6,0x21,0);
    FUN_1004f99e8(param_1,lVar4 + 0x20);
    _swift_endAccess(param_1 + 6);
    FUN_100006cdc(param_1[9],param_1[10]);
  }
  _free(param_1);
  return;
}

