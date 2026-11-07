// rea decompile_all
// name: FUN_10001c5a8
// address: 0x10001c5a8
// body: available
// range: 0x10001c5a8-0x10001c693 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10001c5a8(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar2 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  lVar3 = param_1 + iVar1;
  (*pcVar6)(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 8))(param_1 + iVar1,lVar2);
  }
  param_1 = param_1 + *(int *)(param_2 + 0x1c);
  lVar4 = 0;
  FUN_10000fbb8();
  lVar3 = param_1;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(param_1,1,lVar4);
  if ((int)lVar3 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
    iVar1 = *(int *)(lVar4 + 0x18);
    lVar3 = param_1 + iVar1;
    (*pcVar6)(lVar3,1,lVar2);
    if ((int)lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010001c690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 8))(param_1 + iVar1,lVar2);
      return;
    }
  }
  return;
}

