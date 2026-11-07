// rea decompile_all
// name: FUN_100258820
// address: 0x100258820
// body: available
// range: 0x100258820-0x10025890f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100258820(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_70 [16];
  undefined8 auStack_60 [2];
  undefined1 auStack_50 [8];
  undefined8 local_48;
  
  lVar2 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar8 = *(long *)(lVar2 + -8);
  lVar1 = -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_50 + lVar1;
  __s8Dispatch0A4TimeV3nowACyFZ(puVar7);
  puVar3 = puVar7;
  __sSo21OS_dispatch_semaphoreC8DispatchE4wait7timeoutAC0D13TimeoutResultOAC0D4TimeV_tF();
  (**(code **)(lVar8 + 8))(puVar7,lVar2);
  uVar4 = (ulong)((uint)puVar3 & 1);
  __s8Dispatch0A13TimeoutResultO2eeoiySbAC_ACtFZ(uVar4,0);
  uVar6 = 0;
  if ((uVar4 & 1) != 0) {
    *(undefined8 *)((long)auStack_60 + lVar1) = unaff_x20;
    *(undefined8 *)((long)auStack_60 + lVar1 + 8) = param_1;
    puVar5 = &DAT_100a808d8;
    FUN_100004bb4(&DAT_100a808d8,&DAT_100814ae0);
    __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
              (&local_48,FUN_100258e00,auStack_70 + lVar1,puVar5);
    uVar6 = local_48;
  }
  return uVar6;
}

