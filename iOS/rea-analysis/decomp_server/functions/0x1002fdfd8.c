// rea decompile_all
// name: FUN_1002fdfd8
// address: 0x1002fdfd8
// body: available
// range: 0x1002fdfd8-0x1002fe0d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002fdfd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 uStack_51;
  
  lVar1 = 0;
  __sSqMa(0,param_4);
  lVar4 = *(long *)(lVar1 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  puVar2 = &DAT_100a82488;
  FUN_100004c48(&DAT_100a82488,&DAT_100816c20);
  FUN_10030528c(0,param_4,puVar2,PTR___ss5ErrorWS_100995c48);
  FUN_1002fa508(auStack_90 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  local_80 = param_4;
  uStack_78 = param_5;
  local_70 = param_2;
  uStack_68 = param_3;
  FUN_1002dfc78(&uStack_51,FUN_10030dee8,auStack_90,lVar1,PTR___ss5NeverON_100995d08,
                PTR___sytN_100995e90 + 8,PTR___ss5NeverOs5ErrorsWP_100995d10);
  (**(code **)(lVar4 + 8))(auStack_90 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}

