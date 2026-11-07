// rea decompile_all
// name: FUN_100343ee0
// address: 0x100343ee0
// body: available
// range: 0x100343ee0-0x10034403b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100343ee0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = 0;
  __s10Foundation10URLRequestVMa();
  lVar7 = *(long *)(lVar1 + -8);
  puVar5 = &stack0xffffffffffffffa0 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar6 = (long)puVar5 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314(param_1,lVar6,&DAT_100a82c30,&DAT_1008171f0);
  lVar3 = lVar6;
  (**(code **)(lVar7 + 0x30))(lVar6,1,lVar1);
  if ((int)lVar3 != 1) {
    puVar4 = puVar5;
    (**(code **)(lVar7 + 0x20))(puVar5,lVar6,lVar1);
    __s10Foundation10URLRequestV10httpMethodSSSgvg();
    (**(code **)(lVar7 + 8))(puVar5,lVar1);
    if (lVar6 != 0) {
      (**(code **)(param_3 + 0x20))(param_2,param_3);
      FUN_100153074(puVar4,lVar6,param_2);
      _swift_bridgeObjectRelease(lVar6);
      _swift_bridgeObjectRelease(param_2);
      return (uint)puVar4 & 1;
    }
  }
  return 2;
}

