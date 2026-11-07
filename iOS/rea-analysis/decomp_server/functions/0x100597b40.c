// rea decompile_all
// name: FUN_100597b40
// address: 0x100597b40
// body: available
// range: 0x100597b40-0x100597c1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100597b40(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x30;
  _swift_beginAccess(lVar1,auStack_58,0,0);
  local_70 = *(long *)(param_1 + 0x40);
  if (local_70 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    uStack_78 = *(undefined8 *)(param_1 + 0x38);
    local_80 = *(undefined8 *)(param_1 + 0x30);
    local_68 = (undefined1)uVar2;
    local_67 = (undefined1)((ulong)uVar2 >> 8);
    local_66 = (undefined1)((ulong)uVar2 >> 0x10);
    local_65 = (undefined1)((ulong)uVar2 >> 0x18);
    local_64 = (undefined1)((ulong)uVar2 >> 0x20);
    local_63 = (undefined1)((ulong)uVar2 >> 0x28);
    local_62 = (undefined1)((ulong)uVar2 >> 0x30);
    local_61 = (undefined1)((ulong)uVar2 >> 0x38);
    pcVar3 = *(code **)(param_4 + 0x88);
    FUN_1005a9fac();
    (*pcVar3)(&local_80,0x15,&DAT_1009d5920,lVar1,param_3,param_4);
  }
  return;
}

