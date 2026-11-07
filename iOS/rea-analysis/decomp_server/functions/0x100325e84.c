// rea decompile_all
// name: FUN_100325e84
// address: 0x100325e84
// body: available
// range: 0x100325e84-0x100325f8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100325e84(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  code *local_68;
  
  uVar1 = 0xff;
  local_68 = param_2;
  FUN_10029ca28(0xff,param_4,param_5,param_6);
  lVar2 = 0;
  __sScS12ContinuationVMa(0,uVar1);
  lVar6 = *(long *)(lVar2 + -8);
  lVar7 = *(long *)(lVar6 + 0x40);
  (**(code **)(lVar6 + 0x10))(auStack_70 + -(lVar7 + 0xfU & 0xfffffffffffffff0),param_1,lVar2);
  uVar4 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar5 = uVar4 + 0x28 & (uVar4 ^ 0xffffffffffffffff);
  puVar3 = &DAT_1009b1bc0;
  _swift_allocObject(&DAT_1009b1bc0,uVar5 + lVar7,uVar4 | 7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  *(undefined8 *)(puVar3 + 0x20) = param_6;
  (**(code **)(lVar6 + 0x20))
            (puVar3 + uVar5,auStack_70 + -(lVar7 + 0xfU & 0xfffffffffffffff0),lVar2);
  (*local_68)(FUN_10032c948,puVar3);
  _swift_release(puVar3);
  return;
}

