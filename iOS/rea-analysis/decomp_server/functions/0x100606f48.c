// rea decompile_all
// name: FUN_100606f48
// address: 0x100606f48
// body: available
// range: 0x100606f48-0x100607033 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100606f48(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  
  puVar1 = &DAT_100aaffb8;
  FUN_100004bb4(&DAT_100aaffb8,&DAT_100848630);
  lVar2 = 0;
  __sScCMa(0,param_6,puVar1,PTR___ss5ErrorWS_100995c48);
  lVar3 = *(long *)(lVar2 + -8);
  puVar4 = &stack0xffffffffffffffa0 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_bridgeObjectRetain(param_5);
  __sScC12continuation8functionScCyxq_GSccyxq_G_SStcfC
            (puVar4,param_1,param_4,param_5,param_6,puVar1,PTR___ss5ErrorWS_100995c48);
  (*param_2)(puVar4);
  (**(code **)(lVar3 + 8))(puVar4,lVar2);
  return;
}

