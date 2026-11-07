// rea decompile_all
// name: FUN_1002f8238
// address: 0x1002f8238
// body: available
// range: 0x1002f8238-0x1002f836b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f8238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  
  puVar1 = &DAT_100a83428;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  puVar6 = &stack0xffffffffffffffb0 +
           -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV6stringACSgSSh_tcfC(puVar6,param_2,param_3);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar2 + -8);
  puVar3 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,lVar2);
  if ((int)puVar3 == 1) {
    FUN_1002f836c(puVar6);
    puVar4 = (undefined8 *)0x0;
    FUN_100277ad0();
    puVar5 = puVar4;
    FUN_1002c272c();
    _swift_allocError(puVar4,puVar5,0,0);
    puVar5[3] = PTR___sSSN_1009957f8;
    puVar5[4] = &PTR_PTR_1009af5e8;
    *puVar5 = param_2;
    puVar5[1] = param_3;
    _swift_storeEnumTagMultiPayload(puVar5,puVar4,3);
    _swift_willThrow();
    _swift_bridgeObjectRetain(param_3);
  }
  else {
    (**(code **)(lVar7 + 0x20))(param_1,puVar6,lVar2);
  }
  return;
}

