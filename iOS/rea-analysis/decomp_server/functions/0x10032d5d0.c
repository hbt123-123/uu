// rea decompile_all
// name: FUN_10032d5d0
// address: 0x10032d5d0
// body: available
// range: 0x10032d5d0-0x10032d67f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10032d5d0(undefined8 param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0xff;
  FUN_100277ad0(0xff);
  puVar2 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  uVar3 = 0xff;
  (*param_2)(0xff,uVar6,uVar1,puVar2);
  lVar4 = 0;
  __sScCMa(0,uVar3,PTR___ss5NeverON_100995d08,PTR___ss5NeverOs5ErrorsWP_100995d10);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  FUN_100325090(param_1,unaff_x20 + (uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff)),uVar6,param_2);
  return;
}

