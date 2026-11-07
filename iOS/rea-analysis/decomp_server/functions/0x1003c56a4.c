// rea decompile_all
// name: FUN_1003c56a4
// address: 0x1003c56a4
// body: available
// range: 0x1003c56a4-0x1003c579b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1003c56a4(double param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long extraout_x8;
  undefined8 *puVar5;
  undefined8 uStack_58;
  
  puVar3 = &DAT_100a8c7c0;
  FUN_100004bb4(&DAT_100a8c7c0,&DAT_100822508);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)(&stack0xffffffffffffffa0 + -extraout_x8);
  uVar1 = param_2[1];
  *puVar5 = *param_2;
  *(undefined8 *)((long)&uStack_58 + -extraout_x8) = uVar1;
  iVar2 = *(int *)(puVar3 + 0x30);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))((long)puVar5 + (long)iVar2,param_3,lVar4);
  _swift_bridgeObjectRetain(uVar1);
  __s10Foundation4DateV17timeIntervalSinceySdACF((long)puVar5 + (long)iVar2);
  FUN_100040bb4(puVar5,&DAT_100a8c7c0,&DAT_100822508);
  return param_1 <= 172800.0;
}

