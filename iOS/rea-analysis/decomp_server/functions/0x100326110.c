// rea decompile_all
// name: FUN_100326110
// address: 0x100326110
// body: available
// range: 0x100326110-0x100326293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100326110(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  
  puVar1 = &DAT_100a833f8;
  FUN_100004bb4(&DAT_100a833f8,&DAT_1008178e0);
  puVar7 = &stack0xffffffffffffffa0 +
           -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100a833f0;
  FUN_100004bb4(&DAT_100a833f0,&DAT_1008178d8);
  lVar8 = (long)puVar7 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100a85fd8;
  FUN_100004bb4(&DAT_100a85fd8,&DAT_10081a600);
  lVar6 = *(long *)(puVar2 + -8);
  lVar5 = lVar8 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314(param_1,lVar8,&DAT_100a833f0,&DAT_1008178d8);
  puVar3 = &DAT_100a85cd0;
  FUN_100004bb4(&DAT_100a85cd0,&DAT_10081a368);
  __sScS12ContinuationV5yieldyAB11YieldResultOyx__GxnF(lVar5,lVar8,puVar3);
  (**(code **)(lVar6 + 8))(lVar5,puVar2);
  FUN_10007f314(param_1,puVar7,&DAT_100a833f8,&DAT_1008178e0);
  puVar4 = puVar7;
  _swift_getEnumCaseMultiPayload(puVar7,puVar1);
  FUN_100040bb4(puVar7,&DAT_100a833f8,&DAT_1008178e0);
  if ((int)puVar4 == 1) {
    __sScS12ContinuationV6finishyyF(puVar3);
  }
  return;
}

