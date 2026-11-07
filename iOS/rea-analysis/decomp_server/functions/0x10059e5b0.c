// rea decompile_all
// name: FUN_10059e5b0
// address: 0x10059e5b0
// body: available
// range: 0x10059e5b0-0x10059e87f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10059e5b0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,long param_7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long unaff_x21;
  uint uVar3;
  code *pcVar4;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  uVar3 = (uint)param_5;
  puVar2 = param_1;
  if ((uVar3 & 0xff) != 4) {
    local_58 = (undefined1)param_5;
    pcVar4 = *(code **)(param_7 + 0x80);
    puVar1 = param_1;
    FUN_1005b28f8();
    puVar2 = &local_58;
    (*pcVar4)(puVar2,1,&DAT_1009d59d8,puVar1,param_6,param_7);
  }
  if (unaff_x21 == 0) {
    puVar1 = puVar2;
    if ((uVar3 >> 8 & 0xff) != 3) {
      local_57 = (undefined1)(param_5 >> 8);
      pcVar4 = *(code **)(param_7 + 0x80);
      FUN_1005b28b8();
      puVar1 = &local_57;
      (*pcVar4)(puVar1,2,&DAT_1009d5a68,puVar2,param_6,param_7);
    }
    puVar2 = puVar1;
    if ((uVar3 >> 0x10 & 0xff) != 3) {
      local_56 = (undefined1)(param_5 >> 0x10);
      pcVar4 = *(code **)(param_7 + 0x80);
      FUN_1005b2878();
      puVar2 = &local_56;
      (*pcVar4)(puVar2,3,&DAT_1009d5af8,puVar1,param_6,param_7);
    }
    puVar1 = puVar2;
    if (((uint)(param_5 >> 0x18) & 0xff) != 3) {
      local_55 = (undefined1)(param_5 >> 0x18);
      pcVar4 = *(code **)(param_7 + 0x80);
      FUN_1005b2838();
      puVar1 = &local_55;
      (*pcVar4)(puVar1,4,&DAT_1009d5b88,puVar2,param_6,param_7);
    }
    uVar3 = (uint)(param_5 >> 0x20);
    puVar2 = puVar1;
    if ((uVar3 & 0xff) != 3) {
      local_54 = (undefined1)(param_5 >> 0x20);
      pcVar4 = *(code **)(param_7 + 0x80);
      FUN_1005b27f8();
      puVar2 = &local_54;
      (*pcVar4)(puVar2,5,&DAT_1009d5c18,puVar1,param_6,param_7);
    }
    puVar1 = puVar2;
    if ((uVar3 >> 8 & 0xff) != 3) {
      local_53 = (undefined1)(param_5 >> 0x28);
      pcVar4 = *(code **)(param_7 + 0x80);
      FUN_1005b27b8();
      puVar1 = &local_53;
      (*pcVar4)(puVar1,6,&DAT_1009d5ca8,puVar2,param_6,param_7);
    }
    if (((ushort)(param_5 >> 0x30) & 0xff) != 3) {
      local_52 = (undefined1)(param_5 >> 0x30);
      pcVar4 = *(code **)(param_7 + 0x80);
      FUN_1005b2778();
      puVar2 = &local_52;
      (*pcVar4)(puVar2,7,&DAT_1009d5d38,puVar1,param_6,param_7);
      puVar1 = puVar2;
    }
    if (param_5 >> 0x38 != 5) {
      local_51 = (undefined1)(param_5 >> 0x38);
      pcVar4 = *(code **)(param_7 + 0x80);
      FUN_1005b2738();
      (*pcVar4)(&local_51,8,&DAT_1009d5e48,puVar1,param_6,param_7);
    }
    (**(code **)(param_7 + 0x1b0))(param_4,1000,0x2711,param_6,param_7);
    FUN_10056301c(param_1,param_2,param_3,param_6,param_7);
  }
  return;
}

