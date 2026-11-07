// rea decompile_all
// name: FUN_1007c5d30
// address: 0x1007c5d30
// body: available
// range: 0x1007c5d30-0x1007c5e5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1007c5d30(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar4 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    switch((ulong)plVar2 & 0xffffffff) {
    case 0:
      lVar4 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar4;
      _swift_bridgeObjectRetain();
      _swift_storeEnumTagMultiPayload(param_1,param_3,0);
      break;
    default:
      _memcpy(param_1,param_2,*(size_t *)(lVar4 + 0x40));
      break;
    case 4:
      lVar4 = 0;
      __s10Foundation4DateVMa();
      (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
      _swift_storeEnumTagMultiPayload(param_1,param_3,4);
      break;
    case 5:
      *param_1 = *param_2;
      _swift_bridgeObjectRetain();
      _swift_storeEnumTagMultiPayload(param_1,param_3,5);
      break;
    case 6:
      *param_1 = *param_2;
      _swift_bridgeObjectRetain();
      _swift_storeEnumTagMultiPayload(param_1,param_3,6);
    }
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar3 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

