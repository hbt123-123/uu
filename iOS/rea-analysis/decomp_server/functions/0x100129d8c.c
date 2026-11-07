// rea decompile_all
// name: FUN_100129d8c
// address: 0x100129d8c
// body: available
// range: 0x100129d8c-0x100129e87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100129d8c(double param_1,uint *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long extraout_x8;
  uint uVar4;
  uint *puVar5;
  
  puVar2 = &DAT_100a79a50;
  FUN_100004bb4(&DAT_100a79a50,&DAT_10080e770);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = (uint *)(&stack0xffffffffffffffb0 + -extraout_x8);
  uVar4 = *param_2;
  *puVar5 = uVar4;
  iVar1 = *(int *)(puVar2 + 0x30);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))((long)puVar5 + (long)iVar1,param_3,lVar3);
  __s10Foundation4DateV17timeIntervalSinceySdACF((long)puVar5 + (long)iVar1);
  if (10.0 <= param_1) {
    thunk_FUN_100152fd0(uVar4,*(undefined8 *)(param_5 + 0x10));
    uVar4 = uVar4 ^ 1;
  }
  else {
    uVar4 = 0;
  }
  FUN_100040bb4(puVar5,&DAT_100a79a50,&DAT_10080e770);
  return uVar4 & 1;
}

