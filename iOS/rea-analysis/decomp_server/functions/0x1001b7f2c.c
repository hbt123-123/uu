// rea decompile_all
// name: FUN_1001b7f2c
// address: 0x1001b7f2c
// body: available
// range: 0x1001b7f2c-0x1001b8077 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b7f2c(int *param_1,int *param_2,long param_3,byte *param_4,uint param_5)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined1 auStack_70 [16];
  int local_60;
  
  iVar1 = *param_1;
  bVar2 = *(byte *)(param_1 + 1);
  *param_2 = iVar1;
  *(byte *)(param_2 + 1) = bVar2;
  if ((((bVar2 & 1) == 0) && (iVar1 != *(int *)(param_3 + 0x1c))) &&
     (pbVar4 = param_4, FUN_10040cce0(iVar1), ((ulong)pbVar4 & 1) != 0)) {
    uVar3 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar3);
    local_60 = iVar1;
    FUN_1003fb4bc(FUN_1001b97b8,auStack_70,0xd000000000000093,0x800000010089b8d0,0xd000000000000011,
                  0x800000010089c040,0x13f,0);
  }
  uVar5 = (ulong)*(uint *)(param_3 + 0x1c);
  _swift_retain_n(param_3,2);
  FUN_10040c940(uVar5,param_5 & 1,param_1,FUN_1001b97a8,param_3,FUN_1001b97b0,param_3);
  _swift_release_n(param_3,2);
  *param_4 = (byte)uVar5 & 1;
  return;
}

